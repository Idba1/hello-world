#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100005];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        vector<long long> dist(n + 1, LLONG_MAX);
        dist[x] = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.push({0, x});
        while (!pq.empty())
        {
            auto [cd, cn] = pq.top();
            pq.pop();
            if (cd > dist[cn])
                continue;
            if (cn == y)
                break;
            for (auto &ed : adj_list[cn])
            {
                long long cost = cd + ed.second;
                if (cost < dist[ed.first])
                {
                    dist[ed.first] = cost;
                    pq.push({cost, ed.first});
                }
            }
        }
        if (dist[y] == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[y] << endl;
        }
    }
    return 0;
}