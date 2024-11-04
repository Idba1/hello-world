#include <stdio.h>
void add(int X, int Y)
{
    int sum = X + Y;
    printf("%d\n", sum);
}
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    add(X, Y);
    return 0;
}