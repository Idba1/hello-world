#include <stdio.h>
void fun(int num, int n)
{
    if (num > n)
    {
        return;
    }
    printf("%d\n", num);
    fun(num + 1, n);
}
int main()
{
    fun(1, 5);
    return 0;
}