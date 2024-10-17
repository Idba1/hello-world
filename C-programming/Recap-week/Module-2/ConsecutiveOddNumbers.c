#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int ct = 0; ct < t; ct++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        // printf("%d %d\n", x, y);
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        int sum = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}