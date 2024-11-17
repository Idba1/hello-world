#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);
    cout << x << " " << s << endl;

    string str;
    cin >> str;
    cout << str << endl;
    return 0;
}