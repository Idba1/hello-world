#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char word[100];
    scanf("%s", word);
    for (int i = 3; i < 7; i++)
    {
        word[i] = word[i + 1];
    }
    printf("%s", word);
    return 0;
}
