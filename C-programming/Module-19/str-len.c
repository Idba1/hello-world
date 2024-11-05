#include <stdio.h>
#include <string.h>

void length(char x[])
{
    int len = strlen(x);
    printf("%d\n", len);
}
int main()
{
    char str[20] = "computer";
    length(str);
    return 0;
}