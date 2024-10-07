#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m, &n); 
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d * %2d = %2d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}