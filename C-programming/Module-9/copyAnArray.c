#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    a[4] = 100;
    printf("\n");
    int b[n];
    printf("After copy\n");

    for (int j = 0; j < n; j++)
    {
        b[j] = a[j];
        // printf("value of b index\n");
        printf("%d ", b[j]);
    }
    b[3] = 20;
    a[2] = 90;
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");
    printf("After copy2\n");

    for (int j = 0; j < n; j++)
    {
        // b[j] = a[j];
        // printf("value of b index\n");
        printf("%d ", b[j]);
    }
    return 0;
}