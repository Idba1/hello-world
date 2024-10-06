#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    if (marks > 32 && marks < 101)
    {
        if (marks >= 80 && marks < 101)
        {
            printf("A+\n");
            if (marks >= 90)
            {
                printf("got scholarship\n");
            }
            else
            {
                printf("not got scholarship\n");
            }
        }
        else if (marks > 69 && marks < 80)
        {
            printf("A\n");
        }
        else if (marks > 59 && marks < 70)
        {
            printf("A-\n");
        }
        else if (marks > 49 && marks < 60)
        {
            printf("B\n");
        }
        else if (marks > 39 && marks < 50)
        {
            printf("C\n");
        }
        else if (marks > 32 && marks < 40)
        {
            printf("D\n");
        }
        else
        {
            printf("Enter a valid number 0-100");
        }
        printf("Pass\n");
    }
    else if (marks < 33 && marks >= 0)
    {
        printf("F\n");
        printf("Fail\n");
    }

    else
    {
        printf("enter a valid marks 0-100\n");
    }
    return 0;
}