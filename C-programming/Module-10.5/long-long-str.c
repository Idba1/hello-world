#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char str[10000];
    for (int i = 0; i < N; i++)
    {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
        // scanf("%s",str);
        if (strlen(str) <= 10)
        {
            fputs(str, stdout);
            printf("\n");
        }
        else if (strlen(str) > 10)
        {
            char first = str[0];
            int len = strlen(str) - 2;
            char last = str[strlen(str)-1];
            printf("%c%d%c\n", first, len, last);
        }
    }
    return 0;
}