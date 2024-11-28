#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string reverse_str = s;
    reverse(reverse_str.begin(), reverse_str.end());
    // cout << reverse_str << endl;

    if (s == reverse_str)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}