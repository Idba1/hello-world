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

        vector<long long> prefixSum(n + 1, 0LL);
        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + h[i - 1];
        }

        long long maxWater = 0;
        int bestLeft = 0, bestRight = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long width = (j - i - 1);
                long long height = min(h[i], h[j]);
                long long sumBetween = prefixSum[j] - prefixSum[i + 1];

                long long water = height * width - sumBetween;
                if (water < 0)
                {
                    water = 0;
                }
                if (water > maxWater)
                {
                    maxWater = water;
                    bestLeft = i;
                    bestRight = j;
                }
            }
        }
        cout << bestLeft << " " << bestRight << endl;
    }
    return 0;
}