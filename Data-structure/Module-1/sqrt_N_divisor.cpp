#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl
         << "using Sqrt" << endl;
    for (int i = 1; i <= sqrt(n); i++) // complexity Order of sqrt(N)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }

    cout << endl
         << "using Sqrt second" << endl;
    for (int i = 1; i*i <= n; i++) // complexity Order of sqrt(N)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}