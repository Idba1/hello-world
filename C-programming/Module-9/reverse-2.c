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

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}