#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.capacity() << endl;
    v.push_back(10);
    // cout << v.capacity() << endl;
    v.push_back(20);
    // cout << v.capacity() << endl;
    v.push_back(30);
    // cout << v.capacity() << endl;
    v.push_back(40);
    // cout << v.capacity() << endl;
    v.push_back(50);
    // cout << v.capacity() << endl;

    v.resize(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << v.size() << endl;
    // clear function
    v.clear();
    cout << v.size() << endl;

    cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;
    v.resize(10, 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    // v.clear();
    if (v.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}