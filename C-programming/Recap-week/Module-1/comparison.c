#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    // printf("%d%c%d\n", A, S, B);
    if (S == '>')
    {
        // grater
        if (A > B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (S == '<')
    {
        // lower
        if (A < B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else
    {
        // equal
        if (A == B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    return 0;
}