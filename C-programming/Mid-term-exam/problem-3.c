#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        if (arr[i] >= 1 && arr[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        if (arr[i] >= 4 && arr[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        if (arr[i] > 7)
        {
            printf("Senior candidate\n");
        }
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    return 0;
}
