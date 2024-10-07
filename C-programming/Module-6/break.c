#include <stdio.h>
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("number is found %d\n", i);
            break;
        }
    }

    return 0;
}