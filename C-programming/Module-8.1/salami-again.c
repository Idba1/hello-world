#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int salami[N];
    int max_salami = -100000000;
    int eqaul_salami[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &salami[i]);
        // printf("%d\n", salami[i]);
        if (max_salami < salami[i])
        {
            max_salami = salami[i];
        }
    }
    // printf("%d", max_salami);
    for (int i = 0; i < N; i++)
    {
        // eqaul_salami = max_salami - salami[i];
        salami[i];
        
    }
    printf("%d", eqaul_salami);
    return 0;
}