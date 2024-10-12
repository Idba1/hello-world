#include <stdio.h>
int main()
{
    int N, min = 100000000, pos;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if (min > A[i])
        {
            min = A[i];
            pos = i + 1;
        }
    }
    printf("%d ", min);
    printf("%d", pos);
    return 0;
}