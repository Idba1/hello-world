#include <stdio.h>
int main()
{

    int price = 20;
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
    else if (price < 20)
    {
        printf("Buy 2 Eggs");
    }
    else
    {
        printf("you need to give price value under 40 for check this code. cz it's just a static if-elseif-else checking code. Thank yo :)");
    }
    return 0;
}