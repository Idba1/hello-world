#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello ";
    string s2 = "Hey!";
    string s3 = "Hi!!";
    s = s2;
    s2.assign(s3); //assign function
    cout << s << endl;
    cout << s2 << endl;
    return 0;
}