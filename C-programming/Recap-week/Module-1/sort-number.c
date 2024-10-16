#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // printf("%d %d %d", a, b, c);
    if (a <= b && a <= c)
    {
        // a is min
        if (b <= c)
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    else if (b <= a && b <= c)
    {
        // b is min
        if (a <= b)
        {
            printf("%d\n%d\n%d\n", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", b, c, a);
        }
    }
    else
    {
        // c is min
        if (a < b)
        {
            printf("%d\n%d\n%d\n", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d\n", c, b, a);
        }
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}