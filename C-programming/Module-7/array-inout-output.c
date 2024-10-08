#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // memory location
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", &arr[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] += 5;
        printf("%d ", arr[i]);
    }

    return 0;
}