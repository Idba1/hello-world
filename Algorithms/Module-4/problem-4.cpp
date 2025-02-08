#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j] == '.');
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (auto move : mov)
    {
        int ci = si + move.first;
        int cj = sj + move.second;

        if (valid(ci, cj))
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int apartment_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                apartment_count++;
                dfs(i, j);
            }
        }
    }

    cout << apartment_count << endl;
    return 0;
}