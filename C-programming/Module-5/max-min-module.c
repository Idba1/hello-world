#include <stdio.h>
int main()
{
    int A, B, C, max, min;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B)
    {
        if (A <= C)
        {
            printf("%d", A);
        }
        else
        {
            printf("%d", C);
        }
    }
    else
    {
        if (B <= C)
        {
            printf("%d", B);
        }
        else
        {
            printf("%d", C);
        }
    }

    printf(" ");
    if (A >= B)
    {
        if (A >= C)
        {
            printf("%d", A);
        }
        else
        {
            printf("%d", C);
        }
    }
    else
    {
        if (B >= C)
        {
            printf("%d", B);
        }
        else
        {
            printf("%d", C);
        }
    }

    return 0;
}