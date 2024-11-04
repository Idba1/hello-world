#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int indx;
    scanf("%d",&indx);
    int num[indx];
    for (int i = 0; i < indx; i++)
    {
        scanf("%d", &num[i]);
    }
    int s = 0, l = indx - 1;
    while (s <= l)
    {
        int temp = num[s];
        num[s] = num[l];
        num[l] = temp;
        s++;
        l--;
    }

    for (int i = 0; i < indx; i++)
    {
        printf("%d ", num[i]);
    } 
    return 0;
}
