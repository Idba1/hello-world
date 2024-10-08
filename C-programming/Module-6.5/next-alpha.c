#include <stdio.h>
int main()
{
    char ch,nextAlpha;
    scanf("%c",&ch);
    nextAlpha=ch+1;
    if (ch=='z')
    {
        printf("a");
    }
    else{
        printf("%c",nextAlpha);
    }
    
    return 0;
}