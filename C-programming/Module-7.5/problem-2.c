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

    int find, flag = 0;
    scanf("%d", &find);
    for (int i = 0; i < N; i++)
    {
        if (A[i] == find)
        {
            printf("%d", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("-1");
    }
    return 0;
}