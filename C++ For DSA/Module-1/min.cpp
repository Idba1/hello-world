#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << endl;

    int e, f, g, h;
    cin >> e >> f >> g >> h;
    cout << min(min(e, f), min(g, h)) << endl;

    return 0;
}