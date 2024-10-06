#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    if (n > 0)
    {
        printf("POSITIVE\n");
    }
    else if (n < 0)
    {
        printf("NEGATIVE\n");
    }

    return 0;
}