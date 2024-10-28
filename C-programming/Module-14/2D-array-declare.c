#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f[100000];
int main()
{
    int arr[3][3] = {{
                         1,
                         2,
                         3,
                     },
                     {4, 5, 6},
                     {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("i=%d, j=%d, value=%d, address=%d\n", i, j, arr[i][j], &arr[i][j]);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}