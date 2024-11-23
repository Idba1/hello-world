#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello world";
    cout << s << endl;
    s.erase(5);
    cout << s << endl;
    s.clear();
    cout << s << endl;
    cout << "check" << endl;
    string s2 = "hello";
    s2.resize(4);
    cout << s2 << endl;
    s2.erase(1,3);
    cout << s2 << endl;
    return 0;
}