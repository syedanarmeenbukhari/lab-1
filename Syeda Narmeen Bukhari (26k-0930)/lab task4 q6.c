#include <stdio.h>

int main()
{
    float num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            printf("Result = %.2f", num1 / num2);
            break;

        default:
            printf("Invalid operator");
    }

    
}
