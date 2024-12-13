#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    // using loop (time complexity high)
    cout << "using loop" << endl;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    // using formula (time complexity low)
    cout << "using formula" << endl;
    int sum2 = (n * (n + 1)) / 2;
    cout << sum2;
    return 0;
}