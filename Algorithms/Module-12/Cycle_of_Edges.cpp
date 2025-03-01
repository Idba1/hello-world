#include <bits/stdc++.h>
using namespace std;
int parent[100005], rank_set[100005];

int find(int node)
{
    if (parent[node] == -1)
        return node;
    return parent[node] = find(parent[node]);
}

void union_set(int u, int v)
{
    int leaderU = find(u);
    int leaderV = find(v);
    if (leaderU != leaderV)
    {
        if (rank_set[leaderU] > rank_set[leaderV])
        {
            parent[leaderV] = leaderU;
        }
        else if (rank_set[leaderU] < rank_set[leaderV])
        {
            parent[leaderU] = leaderV;
        }
        else
        {
            parent[leaderV] = leaderU;
            rank_set[leaderU]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    memset(parent, -1, sizeof(parent));
    memset(rank_set, 0, sizeof(rank_set));

    int cycleEdges = 0;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        if (find(a) == find(b))
        {
            cycleEdges++;
        }
        else
        {
            union_set(a, b);
        }
    }

    cout << cycleEdges << endl;
    return 0;
}