#include <stdio.h>
int main()
{
    for (char i = 'A'; i < 'Z'; i++)
    {
        if (i == 'I' || i == 'D' || i == 'B' || i == 'A')
        {
            printf("%c\n", i);
            // printf("Idba\n");
        }
    }

    return 0;
}