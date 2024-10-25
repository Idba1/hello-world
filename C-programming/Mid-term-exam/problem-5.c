#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char S1[1000], S2[1000], S3[1000];
    scanf("%s %s %s", &S1, &S2, &S3);
    // printf("%s %s %s", S1, S2, S3);
    // char cmp = strcmp(S1, S2);
    // printf("%s",cmp);
    char maxStr[1000];
    char minStr[1000];
    strcpy(maxStr, S1);
    strcpy(minStr, S1);
    if (strcmp(S2, maxStr) > 0)
    {
        strcpy(maxStr,S2);
    }
    if (strcmp(S2, minStr) < 0)
    {
        strcpy(minStr,S2);
    }
    
    if (strcmp(S3, maxStr) > 0)
    {
        strcpy(maxStr,S3);
    }
    if (strcmp(S3, minStr) < 0)
    {
        strcpy(minStr,S3);
    }
    

    printf("%s\n", minStr);
    printf("%s\n", maxStr);
    return 0;
}
