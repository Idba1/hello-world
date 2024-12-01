#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        
        int pos = 0;
        while ((pos = s.find(x, pos)) != string::npos)
        {
            s.replace(pos, x.length(), "#");
            pos += 1;
        }
        cout << s << endl;
    }

    return 0;
}
