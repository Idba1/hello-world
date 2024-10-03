#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int have_money;
    scanf("%d ", &have_money);
    if (have_money >= 1000)
    {
        printf("kacchi");
    }
    else if (have_money >= 500)
    {
        printf("pizza");
    }
    else if (have_money >= 250)
    {
        printf("Burger");
    }
    else if (have_money >= 100)
    {
        printf("Fuchka");
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}
