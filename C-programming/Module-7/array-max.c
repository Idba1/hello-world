#include <stdio.h>
#include <limits.h>
int main()
{
    int n, max;
    scanf("%d", &n);
    int arr[n];
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}