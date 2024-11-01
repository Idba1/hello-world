#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 7;
    int *value1 = &a;
    int *value2 = &b;
    printf("%d %d\n", *value1, *value2);
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
    printf("%d %d\n", *value1, *value2);
    return 0;
}
