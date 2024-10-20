#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int length = 0, length2 = 0;
    scanf("%d", &length);
    int a[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }

    printf("\n");
    length2 = length;
    printf("length2 is %d\n", length2);
    int b[length2];
    printf("After copy\n");

    for (int j = 0; j < length2; j++)
    {
        b[j] = a[j];
        printf("%d ", b[j]);
    }
    return 0;
}