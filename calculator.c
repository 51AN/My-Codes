#include <stdio.h>
int main()
{
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter first operand: ");
    scanf("%lf", &first);
    printf("Enter second operand: ");
    scanf("%lf", &second);

    switch (operator)
    {
    case '+':
        printf("%.3lf + %.3lf = %.3lf", first, second, first + second);
        break;
    case '-':
        printf("%.3lf - %.3lf = %.3lf", first, second, first - second);
        break;
    case '*':
        printf("%.3lf * %.3lf = %.3lf", first, second, first * second);
        break;
    case '/':
        printf("%.3lf / %.3lf = %.3lf", first, second, first / second);
        break;
    // operator doesn't match any case constant//
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

