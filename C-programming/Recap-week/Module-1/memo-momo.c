#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long int A, B, K;
    scanf("%lld %lld %lld", &A, &B, &K);
    // printf("%lld %lld %lld\n", A, B, K);
    if (A % K == 0 && B % K == 0)
    {
        printf("Both\n");
    }
    else if (A % K == 0)
    {
        printf("Memo\n");
    }
    
    else if (  B % K == 0)
    {
        printf("Momo\n");
    }
     if (A % K != 0 && B % K != 0)
    {
        printf("No One\n");
    }

    return 0;
}