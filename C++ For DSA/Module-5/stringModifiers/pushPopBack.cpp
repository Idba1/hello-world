#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello ";
    s[0] = 'G';
    string c = "C";
    s.append(c);
    s.push_back('A'); // push
    cout << s << endl;
    s.pop_back();
    cout << s << endl; //pop
    return 0;
}