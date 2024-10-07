#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            printf("number is found %d\n", i);
            continue;
        }
    }

    return 0;
}
// condition true hole code execute hoye porer ar kono kaj korbe na but next iteration theke code ta abar continue korbe