#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    char str[100];
    scanf("%d", &n);
    scanf("%s", str);

    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int digit = str[i] - '0';
        num = num * 10 + digit;
    }
    printf("%d \n", num);
    return 0;
}