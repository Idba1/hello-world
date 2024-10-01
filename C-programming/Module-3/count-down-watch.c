#include <stdio.h>
int main()
{
    int hour, min, sec;
    printf("Please enter your value for create your own count-down stop watch (Hour,Minutes, Second\n");
    scanf("%d %d %d", &hour, &min, &sec);
    for (int i = hour; i >= 0; i--)
    {
        for (int j = min; j >= 0; j--)
        {
            for (int k = sec; k >= 0; k--)
            {
                printf("%d Hours %d Minutes %d Second\n", i, j, k);
            }
        }
    }

    return 0;
}