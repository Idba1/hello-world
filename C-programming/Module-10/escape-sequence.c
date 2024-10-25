#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str[100] = "Hello Bangladesh!";
    fputs(str, stdout);
    printf("\n");

    char str2[100] = "Hello \"Bangladesh!\"";
    fputs(str2, stdout);
    printf("\n");

    char str3[100] = "Hello \tBangladesh!\t c";
    fputs(str3, stdout);
    printf("\n");

    char str4[100] = "Hello \0Bangladesh!\t c";
    fputs(str4, stdout);
    printf("\n");

    char str5[100] = "Hello \\Bangladesh\\ c";
    fputs(str5, stdout);
    printf("\n");

    char str6[100] = "Hello *****Bangladesh*****";
    fputs(str6, stdout);
    printf("\n");

    return 0;
}