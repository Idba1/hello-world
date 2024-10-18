#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}