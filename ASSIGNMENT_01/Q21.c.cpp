//program 21:PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR) AND USING SWITCH-CASE.(CASE IN CHAR FORM). 
#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    // Reading the two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Reading the arithmetic operator in character form
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline characters

    // Performing the specific task using switch-case
    switch (op) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Checking for division by zero
            if (num2 != 0) {
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}

