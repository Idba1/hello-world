#include <stdio.h>
int main()
{
    char operator;
    printf("Enter a expresion what u want to do a operation. like +, -, *, /, mod: \n");
    scanf("%c", &operator);
    int number1, number2, result;
    printf("Enter 2 number: \n");
    scanf("%d %d", &number1, &number2);
    switch (operator)
    {
    case '+':
        result = number1 + number2;
        printf("result is = %d + %d = %d\n", number1, number2, result);
        break;
    case '-':
        result = number1 - number2;
        printf("result is = %d - %d = %d\n", number1, number2, result);
        break;
    case '*':
        result = number1 * number2;
        printf("result is = %d * %d = %d\n", number1, number2, result);
        break;
    case '/':
        if (number2 != 0)
        {
            result = number1 / number2;
            printf("result is = %d / %d = %d\n", number1, number2, result);
        }
        else
        {
            printf("Error! Cz Devision by not possible. it will give you a garbage value. \n");
        }
        break;
    case '%':
        if (number2 != 0)
        {
            result = number1 % number2;
            printf("modulus is = %d\n", result);
        }
        else
        {
            printf("Error! Cz Devision by not possible. it will give you a garbage value. \n");
        }
        break;

    default:
        printf("Enter a valid operator (+, -, *, /, mod) or valid number. Thank you. \n");
        break;
    }
    return 0;
}