#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int *addressA = &A, *addressB = &B;
    int difference = ((*addressA - *addressB) * (-1)); //abs dile correct ase keno?
    printf("%d\n", difference);
    return 0;
}
