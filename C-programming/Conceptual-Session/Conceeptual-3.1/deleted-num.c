#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    int pos;
    scanf("%d", &pos);
    for (int i = pos-1; i < 8; i++)
    {
        num[i] = num[i + 1];
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d", num[i]);
    }
    return 0;
}
