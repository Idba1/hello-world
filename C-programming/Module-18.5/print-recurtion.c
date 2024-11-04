#include <stdio.h>
void recursion(int n, int N)
{
    if (n > N)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion(n + 1, N);
}
int main()
{
    int N;
    scanf("%d", &N);
    recursion(1, N);
    return 0;
}