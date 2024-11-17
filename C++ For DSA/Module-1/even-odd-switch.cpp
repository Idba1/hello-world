#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 1:
        cout << "odd" << endl;
        break;
    case 0:
        cout << "even" << endl;
        break;
    default:
        cout << "please enter a valid number" << endl;
        break;
    }
    return 0;
}