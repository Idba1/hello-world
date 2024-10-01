#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a value for continue for loop: \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("hi from increment value %d\n", i);
    }
    printf("-------------------------------------\n");
    printf("-------------------------------------\n");
    for (j = n; j >= 0; j--)
    {
        printf("hello from decrement value %d\n", j);
    }

    return 0;
}