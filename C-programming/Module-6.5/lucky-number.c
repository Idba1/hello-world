#include <stdio.h>
int main()
{
    int N, firstNum, secondNum;
    scanf("%d", &N);
    firstNum = N / 10;
    secondNum = N % 10;
    if ((secondNum != 0 && firstNum % secondNum == 0) || (firstNum != 0 && secondNum % firstNum == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}