#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int value;
        cin >> value;
        s.insert(value);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    if (s.count(5))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}