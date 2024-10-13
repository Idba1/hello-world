#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int X;
    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if (i == X - 1)
        {
            arr[i] = (arr[i] == 0) ? 1 : 0;
        }
        printf("%d", arr[i]);
    }

    return 0;
}