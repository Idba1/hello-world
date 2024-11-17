#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a, b) << endl;

    int e, f, g, h;
    cin >> e >> f >> g >> h;
    cout << max(max(e, f), max(g, h)) << endl;

    return 0;
}