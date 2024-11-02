#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = malloc(1 * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        int *temp = arr;
        arr = realloc(arr, (i + 1) * sizeof(int));
        if (arr == NULL)
        {
            arr = temp;
        }

        arr[i] = num;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
