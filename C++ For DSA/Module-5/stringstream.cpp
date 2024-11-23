#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;

    stringstream ss(s);
    string str;
    int count = 0;
    while (ss >> str)
    {
        cout << str << endl;
        count++;
    }
    cout << count << endl;
    // ss >> str;
    // cout << str << endl;
    // ss >> str;
    // cout << str << endl;
    return 0;
}