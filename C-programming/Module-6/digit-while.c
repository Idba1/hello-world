#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        if (N == 0)
        {
            printf("0");
        }
        while (N > 0)
        {
            int digit = N % 10;
            printf("%d ", digit);
            N = N / 10;
        }
        printf("\n");
    }

    return 0;
}