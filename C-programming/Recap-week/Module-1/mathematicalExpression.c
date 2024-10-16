#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    // printf("%d %c %d %c %d\n", A, S, B, Q, C);
    if (S == '+')
    {
        // printf("%c\n", S);
        if (A + B == C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", A + B);
        }
    }
    else if (S == '-')
    {
        if (A - B == C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d", A - B);
        }
    }
    else
    {
        if (A * B == C)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d", A * B);
        }
    }

    return 0;
}