#include <bits/stdc++.h>
using namespace std;
int u_arr[1000006], v_arr[1000006], w_arr[1000006];
long long dist[1005];

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> u_arr[i] >> v_arr[i] >> w_arr[i];
    }
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        dist[i] = LLONG_MAX;
    }
    dist[s] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (dist[u_arr[j]] != LLONG_MAX && dist[u_arr[j]] + w_arr[j] < dist[v_arr[j]])
            {
                dist[v_arr[j]] = dist[u_arr[j]] + w_arr[j];
            }
        }
    }
    bool negCycle = false;
    for (int j = 0; j < e; j++)
    {
        if (dist[u_arr[j]] != LLONG_MAX && dist[u_arr[j]] + w_arr[j] < dist[v_arr[j]])
        {
            negCycle = true;
            break;
        }
    }
    if (negCycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (dist[d] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[d] << endl;
        }
    }
    return 0;
}