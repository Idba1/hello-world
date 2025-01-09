#include <bits/stdc++.h>
using namespace std;

bool checkEmpty(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (!st.empty() && (st.top() == '0' && c == '1'))
        {
            st.pop(); 
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (checkEmpty(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}