#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Get user input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit with an error code
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit with an error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit successfully
}

