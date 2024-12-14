#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // O(1) complexity
    cin >> n;

    for (int i = 1; i <= n; i *= 2) // i *= 2(increment or decrement jodi mutiple || divided vabe hoy tahole complexity = O(Log N))
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = n; i >= 1; i /= 3)
    {
        cout << i << " ";
    }
    return 0;
}