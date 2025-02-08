#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];

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

    for (int i = 0; i < n; i++)
    {
        sort(adj_list[i].rbegin(), adj_list[i].rend());
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (adj_list[x].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int node : adj_list[x])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
    return 0;
}