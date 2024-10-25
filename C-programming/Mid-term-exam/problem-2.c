#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);
    int arr[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (X <= arr[i] && Y >= arr[i])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
