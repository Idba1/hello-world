#include <stdio.h>
int main()
// arr[10000000]
{
    int n, sum = 0;
    double avg;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n");
    printf("%d", sum);
    avg = (double) sum / n; //type casting
    printf("\n%0.2lf", avg);
    return 0;
}