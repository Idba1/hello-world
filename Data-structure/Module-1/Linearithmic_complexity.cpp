#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(N) Complexity
    {
        for (int i = 1; i < n; i *= 2) // O(LogN) Complexity
        {
            cout << "Hello" << endl;
        }
        // Linearithmic Complexity O(N*LogN)
    }

    return 0;
}