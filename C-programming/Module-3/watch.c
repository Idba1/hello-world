#include <stdio.h>
int main()
{
    int hour, min, sec;
    printf("Please enter your 3 value for create your own time calculation (Hour,Minutes, Second\n");
    scanf("%d %d %d", &hour, &min, &sec);
    for (int i = 0; i <= hour; i++)
    {
        for (int j = 0; j <= min; j++)
        {
            for (int k = 0; k <= sec; k++)
            {
                printf("%d Hours %d Minutes %d Second\n", i, j, k);
            }
        }
    }

    return 0;
}