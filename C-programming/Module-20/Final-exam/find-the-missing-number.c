#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);
    long long int A, B, C, D, M4, M3;
    for (int i = 0; i < T; i++)
    {
        scanf("%lld %lld %lld %lld", &M4, &A, &B, &C);
        M3 = A * B * C;
        if (M4 % M3 == 0)
        {
            D = M4 / M3;
            printf("%lld\n", D);
        }
        else
        {
            if (M3 == 0 || M4 == 0)
            {
                printf("0\n");
            }
            else if (M3 != 0 && M4 != 0)
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
