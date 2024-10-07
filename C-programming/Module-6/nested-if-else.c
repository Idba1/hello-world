#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}