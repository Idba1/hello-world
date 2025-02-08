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

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int count = 1;

    for (auto move : mov)
    {
        int ci = si + move.first;
        int cj = sj + move.second;

        if (valid(ci, cj))
        {
            count += dfs(ci, cj);
        }
    }
    return count;
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
    vector<int> room_sizes;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int room_size = dfs(i, j);
                room_sizes.push_back(room_size);
            }
        }
    }
    
    sort(room_sizes.begin(), room_sizes.end());
    if (room_sizes.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        for (int size : room_sizes)
        {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}