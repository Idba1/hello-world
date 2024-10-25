#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d %d",&N,&K);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
