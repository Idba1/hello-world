#include <stdio.h>
int main()
{
    for (char i = 'A'; i < 'Z'; i++)
    {
        printf("%c\n",i);
    }

    for (char j = 'Z'; j >= 'A'; j--)
    {
        printf("%d\n", j);
    }

    for (char k = '&'; k >= '&'; k--)
    {
        printf("& value is %d\n", k);
    }

    return 0;
}