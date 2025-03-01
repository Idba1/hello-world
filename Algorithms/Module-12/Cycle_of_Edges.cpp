#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + h[i];
        }

        long long maxWater = 0;
        int bestI = 0, bestJ = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int width = j - i - 1;
                long long height = min(h[i], h[j]);
                long long sumBetween = prefix[j] - prefix[i + 1];
                long long water = height * width - sumBetween;

                if (water < 0)
                    water = 0;

                if (water > mgit axWater)
                {
                    maxWater = water;
                    bestI = i;
                    bestJ = j;
                }
            }
        }
        cout << bestI << " " << bestJ << "\n";
    }
    return 0;
}