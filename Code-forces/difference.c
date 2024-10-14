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
    int A = arr[0];
    int B = arr[1];
    int C = arr[2];
    int D = arr[3];
    int X = (A * B) - (C * D);
    printf("Difference = %d", X);

    return 0;
}