#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks > 32 && marks < 101)
    {
        if (marks >= 80)
        {
            printf("A+");
        }
        else if (marks > 69 && marks < 80)
        {
            printf("A");
        }
        else if (marks > 59 && marks < 70)
        {
            printf("A-");
        }
        else if (marks > 49 && marks < 60)
        {
            printf("B");
        }
        else if (marks > 39 && marks < 50)
        {
            printf("C");
        }
        else if (marks > 32 && marks < 40)
        {
            printf("D");
        }
        else
        {
            printf("Enter a valid number 0-100");
        }
    }
    else if (marks < 33 && marks >= 0)
    {
        printf("F");
    }

    else
    {
        printf("enter a valid marks 0-100");
    }
    return 0;
}