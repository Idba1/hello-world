#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int find;
    scanf("%d", &find);
    for (int i = 0; i < N; i++)
    {
        if (A[i] == find)
        {
            printf("%d", i);
            break;
        }
        else
        {
            printf("-1");
            break;
        }
    }

    return 0;
}