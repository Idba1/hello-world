#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello world";
    // loop
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
    // pointer iterator
    cout << *s.begin() << endl;
    cout << *(s.end() - 1) << endl;
    cout << endl;

    cout << "iterator print" << endl;
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    // for (auto it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    cout << endl;
    return 0;
}