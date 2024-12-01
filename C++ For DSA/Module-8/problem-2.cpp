#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout << s << endl;

    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
