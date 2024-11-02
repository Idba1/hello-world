#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count[1001] = {0};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            count[arr[i][j]]++;
            // printf("%d\n", count[arr[i][j]]);
        }
    }
    for (int i = 0; i < X; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", count[num]);
    }

    return 0;
}
