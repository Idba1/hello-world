#include <stdio.h>
int main()
{
    int N, x, evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        if (x > 0)
        {
            posCount++;
        }
        else if (x < 0)
        {
            negCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", posCount);
    printf("Negative: %d\n", negCount);
    return 0;
}
// Even: 3
// Odd: 2
// Positive: 1
// Negative: 3
// 5
// -5 0 -3 -4 12