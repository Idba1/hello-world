#include <stdio.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("-1\n");
    }

    return 0;
}