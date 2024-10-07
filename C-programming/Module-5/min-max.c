#include <stdio.h>
int main()
{
    int A, B, C, min, max;
    scanf("%d %d %d", &A, &B, &C);
    max = -100000;

    if (max <= A)
    {
        max = A;
        if (max <= B)
        {
            max = B;
            if (max <= C)
            {
                max = C;
            }
        }
    }
    min = 100000;
    if (min >= A)
    {
        min = A;
        if (min >= B || min >= C)
        {
            min = B;
            if (min >= C)
            {
                min = C;
            }
        }
    }
    printf("%d %d", min, max);
    return 0;
}