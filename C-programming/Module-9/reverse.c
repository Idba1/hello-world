#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[100000];
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
        printf("%d ", a[j]);
    }

    printf("\n");
    int b[n];
    for (int j = n - 1, i = 0; j >= 0, i < n; j--, i++)
    {
        b[j] = a[i];
    }

    printf("\n");
    for (int j = 0; j < n; j++)
    {
        a[j] = b[j];
    }
    // printf("\n");
    // for (int j = 0; j < n; j++)
    // {
    //     printf("%d ", b[j]);
    // }
    
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}