#include <stdio.h>
int main()
{
    printf("Before while loop\n");
    int i, n, j;
    printf("Enter a value for run while loop\n");
    scanf("%d", &n);
    i = 0;
    j = n;
    while (i <= n)
    {
        printf("Inside while loop %d \n", i);
        i++;
    }

    printf("After while loop \n");

    printf("----------------------\n");
    printf("----------------------\n");

    while (j >= 0)
    {
        printf("Inside while loop %d \n", j);
        j--;
    }
    return 0;
}