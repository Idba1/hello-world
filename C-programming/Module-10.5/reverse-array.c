#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int arr2[N];
    for (int i = 0, j = N; i < N, j > 0; i++, j--)
    {
        scanf("%d", &arr[i]);
        arr2[j] = arr[i];
        // printf("%d ", arr2[j]);
    }
    for (int j = 1; j <= N; j++)
    {
        printf("%d ", arr2[j]);
    }

    return 0;
}