#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int *address = &a;
    printf("%d \n", a);        // value of a
    printf("%d \n", address);  // address of a
    printf("%d \n", *address); // value of a

    return 0;
}
