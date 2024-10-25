#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // char str[20];
    // scanf("%s", str);
    // printf("first string is %s\n", str);
     
    // getchar(); // Newline consume korte eta add kora

    char strLine[30];
    scanf("%[^\n]s", strLine);
    printf("second string in %s\n", strLine);

    return 0;
}