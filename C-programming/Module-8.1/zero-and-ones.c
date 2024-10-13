#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int countOne = 0, countZero = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
        {
            countOne = countOne + 1;
        }
        if (arr[i] == 0)
        {
            countZero = countZero + 1;
        }
    }

    printf("%d %d", countZero, countOne);
    return 0;
}