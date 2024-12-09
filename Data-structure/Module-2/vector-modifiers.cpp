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
    return 0;
}