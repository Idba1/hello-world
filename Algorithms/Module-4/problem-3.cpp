#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

bool dfs(int si, int sj, int ei, int ej)
{
    vis[si][sj] = true;
    if (si == ei && sj == ej)
    {
        return true;
    }
    for (auto move : mov)
    {
        int ci = si + move.first;
        int cj = sj + move.second;

        if (valid(ci, cj))
        {
            if (dfs(ci, cj, ei, ej))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;
    int l, r, u, d;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                l = i;
                r = j;
            }
            else if (grid[i][j] == 'B')
            {
                u = i;
                d = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if (dfs(l, r, u, d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}