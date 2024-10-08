#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min;
    scanf("%d", &n);
    int arr[n];
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}