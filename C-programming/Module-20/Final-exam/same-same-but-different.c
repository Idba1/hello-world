#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);
    int n = strlen(s1);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i] && s1[i] != s3[i] && s2[i] != s3[i])
        {
            count = count + 2;
        }
        else if (s1[i] != s2[i] || s1[i] != s3[i] || s2[i] != s3[i])
        {
            count = count + 1;
        }
    }
    printf("%d", count);
    return 0;
}