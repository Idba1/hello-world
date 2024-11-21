#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int maxValue = A[0];
    for (int i = N - 1; i >= 0; i--)
    {
        maxValue = max(maxValue, A[i]);
    }
    cout << maxValue;
    return 0;
}
