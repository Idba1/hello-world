#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10, b = 5, c = 5, d = 0, e = 10, f = 44;
    printf("%d \n", a > b);
    printf("%d \n", b > a);
    printf("%d \n", a > d);
    printf("%d \n", b == c);
    printf("%d \n", b != c);
    printf("%d \n", e >= a);
    printf("%d \n", e >= f);
    return 0;
}