#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 1, 5, 6, 1, 5};
    replace(v.begin(), v.end(), 1, 0);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    replace(v.begin(), v.end() - 2, 5, 500);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // find
    auto it = find(v.begin(), v.end(), 15);
    if (it == v.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    return 0;
}