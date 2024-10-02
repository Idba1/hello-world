#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int A;
    scanf("%d\n", &A);
    long long int B;
    scanf("%lld\n", &B);
    float C;
    scanf("%f\n", &C);
    char D;
    scanf("\n%c", &D);

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%0.2f\n", C);
    printf("%c\n", D);

    return 0;
}
