#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a value for do-while-loop\n");
    scanf("%d", &n);
    i = 0;
    do
    {
        printf("hello from do %d\n", i);
        i++;
    } while (i <= n);
    // {
    //     printf("Hello from while %d\n", i);
    // };

    return 0;
}