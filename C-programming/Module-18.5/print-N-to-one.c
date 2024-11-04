#include <stdio.h>
void print(int N, int n)
{
    if (N == 0)
    {
        return;
    }

    if (N == 1)
    {
        printf("%d", N);
    }
    if (N > n)
    {
        printf("%d ", N);
    }

    print(N - 1, n);
}
int main()
{
    int N;
    scanf("%d", &N);
    print(N, 1);
    return 0;
}