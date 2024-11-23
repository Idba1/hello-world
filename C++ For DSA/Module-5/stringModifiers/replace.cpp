#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello world";
    cout << s << endl;
    s.replace(6, 5, "Idba ");
    cout << s << endl;
    s.insert(11, "Islam");
    cout << s << endl;
    return 0;
}