#include <stdio.h>
#include <math.h>
int main()
{

    int num, sumOfEven, sumOfOdd;
    scanf("%d", &num);
    sumOfEven = 0;
    sumOfOdd = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sumOfEven = sumOfEven + i;
        }
        else
        {
            sumOfOdd = sumOfOdd + i;
        }
    }
    printf("sum of even number: %d\n", sumOfEven);
    printf("sum of odd number: %d\n", sumOfOdd);
    return 0;
}