#include <stdio.h>
int main()
{

    int price;
    printf("enter your price: ");
    scanf("%d", &price);
    if (price == 40)
    {
        printf("Buy 4 Eggs");
    }
    else if (price == 30)
    {
        printf("Buy 3 Eggs");
    }
    else if (price == 20)
    {
        printf("Buy 2 Eggs");
    }
    else if (price > 40)
    {
        printf("You are Borolox bro");
    }
    else if (price < 20 && price>0)
    {
        printf("Buy 2 Eggs");
    }
    else
    {
        printf("you need to give a positive integer number. Thank yo :)");
    }
    return 0;
}