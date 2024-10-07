#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        for (n; n > 0; n = n / 10)
        {
            int digit = n % 10;
            printf("%d ", digit);
            
        }
        printf("\n");
    }

    return 0;
}