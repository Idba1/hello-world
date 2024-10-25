#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    long long int T;
    scanf("%lld", &T);
    int arr[N];
    int sumOfCount = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sumOfCount += arr[i];
        if (sumOfCount > T)
        {
            break;
        }
        count++;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    printf("%d", count);
    return 0;
}
