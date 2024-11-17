#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double d = 23.2345346;
    cout << fixed << setprecision(6) << d << endl;
    return 0;
}