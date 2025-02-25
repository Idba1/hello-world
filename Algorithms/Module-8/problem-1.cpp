#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n, m;
int sx, sy, dx, dy;
int dirx[] = {-1, 1, 0, 0};
int diry[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y];
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = par.first + dirx[i];
            int ny = par.second + diry[i];
            if (isValid(nx, ny))
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    cin >> sx >> sy >> dx >> dy;

    memset(vis, false, sizeof(vis));
    bfs(sx, sy);

    if (vis[dx][dy])
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}