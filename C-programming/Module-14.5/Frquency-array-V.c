#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n + 5];
    int freq[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]+=1;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }
    return 0;
}