#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // O(1) complexity
    cin >> n;

    for (int i = 1; i <= n; i+=2) // O(n) complexity
    {
        cout << i << " ";
    }

    for (int i = 1; i <= n; i++) // O(n) complexity
    {
        cout << i << " ";
    }

    return 0; // O(1) complexity
}

// full code time complexity O(n). cz 
// 1. always take worst complexity
// 2. ignore the constant