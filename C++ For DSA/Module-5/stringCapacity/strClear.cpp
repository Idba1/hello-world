#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "student";
    cout << s1 << endl;
    if (s1.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    cout << s1.size() << endl;

    s1.clear();
    cout << s1 << endl;
    if (s1.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    cout << s1.size() << endl;
    return 0;
}