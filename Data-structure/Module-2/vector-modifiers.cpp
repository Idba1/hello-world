#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> v2;
    // assign
    v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << endl;
    // }
    for (int x : v2)
    {
        cout << x << endl;
    }

    v2.pop_back();
    cout << "after pop" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    v2.push_back(10);
    cout << "after push" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    // insert
    v2.insert(v2.begin() + 2, 500);
    cout << "after insert" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    // insert multiple value
    vector<int> v3 = {100, 200, 400, 300};
    v2.insert(v2.begin() + 3, v3.begin(), v3.end());
    cout << "after insert multiple value" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    // erase
    v2.erase(v2.begin() + 2);
    cout << "after erase 3rd value" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    // erase multiple value
    v2.erase(v2.begin() + 2, v2.begin() + 6);
    cout << "after erase multiple value" << endl;
    for (int x : v2)
    {
        cout << x << endl;
    }

    return 0;
}