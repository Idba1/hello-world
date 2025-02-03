#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q; //space complexity --> O(V) OR O(N)
    q.push(src);
    vis[src] = true;

    while (!q.empty()) // time complexity --> O(N) OR O(V)
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // oi node ke niye kaj kora
        cout << par << " ";

        // children golo push kora
        for (int child : adj_list[par]) // time complexity --> O(E)
        {
            // cout << child << " ";
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true; // time complexity --> full O(N+E) OR O(V+E)
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    bfs(0);

    return 0;
}