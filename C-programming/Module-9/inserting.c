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
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");
    int index, value;
    scanf("%d %d", &index, &value);
    n++;
    for (int i = n - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}