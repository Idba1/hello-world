#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z')
    {
        // LowerCase
        X = X - 32;
        printf("%c\n", X);
    }
    else
    {
        // UpperCase
        X = X + 32;
        printf("%c\n", X);
    }
    // printf("%c15\n", X);
    // if (X >= 'A' && X <= 'Z')
    // {
    //     // Y = X - 32;
    //     printf("%c\n", X);
    //     printf("%c", Y);
    // }
    return 0;
}