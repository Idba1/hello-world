#include <stdio.h>
int main()
{
    int N;
    long long int sum = 0;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        sum = sum * (-1);
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}