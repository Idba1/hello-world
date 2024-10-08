// data type name[size]
// float temp[45];

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
        printf("%d\n", arr[i]);
    }
    // printf("%d\n", arr[5]);    
    return 0;
}