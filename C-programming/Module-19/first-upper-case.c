#include <stdio.h>
#include <string.h>
#include<ctype.h>

void makeUpperCaseFirst(char x[])
{
    // char f = x[0];
    
    // toupper(f);

    x[0] = toupper(x[0]);
    printf("%s\n", x);
}
int main()
{
    char str[20] = "computer";
    makeUpperCaseFirst(str);
    return 0;
}