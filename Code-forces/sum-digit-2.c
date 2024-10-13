#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &i);
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}