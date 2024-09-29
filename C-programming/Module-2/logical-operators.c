#include <stdio.h>
int main()
{
    int is_open = "yes";
    int is_available = "false";
    if ((is_open == "yes") && (is_available == "true"))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }


    if ((is_open == "yes") || (is_available == "true"))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    if(is_open!="yes"){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}