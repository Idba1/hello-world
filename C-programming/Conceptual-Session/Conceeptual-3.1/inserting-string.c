#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    int position;
    scanf("%d", &position);
    for (int i = len; i >= position-1; i--)
    {
        word[i + 1] = word[i];
    }
    char insertChar;
    getchar();
    scanf("%c", &insertChar);
    word[position-1] = insertChar;
    printf("%s", word);
    return 0;
}
