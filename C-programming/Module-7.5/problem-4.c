#include <stdio.h>
int main()
{
    int N, max = 0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] <= 10 )
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    return 0;
}