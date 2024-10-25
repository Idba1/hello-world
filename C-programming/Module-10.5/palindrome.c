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
    for (int i = 1, j = N; i <= N, j > 0; i++, j--)
    {
        scanf("%d", &arr[i]);
        arr2[j] = arr[i];
        // printf("%d ", arr2[j]);
    }
    int flag = 1;
    for (int i = 1; i <= N; i++)
    {
        if (arr[i] != arr2[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}