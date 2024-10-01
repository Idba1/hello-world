#include <stdio.h>
int main()
{
    printf("Before while loop\n");
    int i, n;
    printf("Enter a value for run while loop\n");
    scanf("%d", &n);
    i = 0;
    while (i <= n)
    {
        printf("Inside while loop %d \n", i);
        i++;
    }

    printf("After while loop \n");
    return 0;
}