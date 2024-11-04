#include <stdio.h>
void print(int n, int N)
{
    if (n > N)
    {
        return;
    }

    printf("%d\n", n);
    print(n + 1, N);
}
int main()
{
    int N;
    scanf("%d", &N);
    print(1, N);
    return 0;
}