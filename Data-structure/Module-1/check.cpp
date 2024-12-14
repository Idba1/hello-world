#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // O(1) complexity
    cin >> n;
    int k = 2;
    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
        i = i * k; // O(log N)
    }
    return 0;
}