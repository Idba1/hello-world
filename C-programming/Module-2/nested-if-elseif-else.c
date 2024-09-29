#include <stdio.h>
int main()
{

    int days;
    int is_boot_available = "true";
    int is_ship_available = "true";
    printf("Enter your holyday: ");
    scanf("%d", &days);
    if ((days <= 2) && (days > 0))
    {
        if (is_boot_available == "true")
        {
            printf("Tanggoya howor");
        }
        else
        {
            printf("Sylet");
        }
    }
    else if ((days > 2) && (days <= 4))
    {
        if (is_ship_available == "true")
        {
            printf("sent martin");
        }
        else
        {
            printf("Cox Bazar");
        }
    }
    else if (days > 4)
    {
        printf("Chool mama long tour dey..!!!!! YAY!!!");
    }

    else
    {
        printf("tor boss age chuti dik pore tour er programme koris");
    }
    return 0;
}