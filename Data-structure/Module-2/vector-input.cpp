#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // push_back way for take input
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }
    for (int y : v2)
    {
        cout << y << " ";
    }
    cout << endl;
    return 0;
}