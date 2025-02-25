#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n, m;
int dirx[] = {-1, 1, 0, 0};
int diry[] = {0, 0, -1, 1};

int bfs(int x, int y)
{
    int area = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;

    while (!q.empty())
    {
        pair<int, int> cell = q.front();
        q.pop();
        area++;

        for (int i = 0; i < 4; i++)
        {
            int nx = cell.first + dirx[i];
            int ny = cell.second + diry[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && grid[nx][ny] == '.')
            {
                q.push({nx, ny});
                vis[nx][ny] = true;
            }
        }
    }

    return area;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));

    int min_area = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int area = bfs(i, j);
                min_area = min(min_area, area);
            }
        }
    }

    cout << (min_area == INT_MAX ? -1 : min_area) << endl;
    return 0;
}