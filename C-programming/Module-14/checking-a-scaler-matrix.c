#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f[100000];
int main()
{
    int n;
    scanf("%d ", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int element = arr[0][0];
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("scaler\n");
    }
    else
    {
        printf("not scaler\n");
    }
    return 0;
}