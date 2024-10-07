#include <stdio.h>
int main()
{
    int A, B, C, max, min;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C)
    {
        printf("%d", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }
    printf(" ");
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }

    return 0;
}