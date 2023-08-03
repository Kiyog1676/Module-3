#include <stdio.h>

int main() {
    int number1, number2, addition, subtraction, multiply;
    float divided;

    printf("Enter number1: ");
    scanf("%d", &number1);

    printf("Enter your number2: ");
    scanf("%d", &number2);

    // Perform calculations
    addition = number1 + number2;
    subtraction = number1 - number2;
    multiply = number1 * number2;
    divided = (float)number1 / number2;

    printf("Addition = %d\n", addition);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %.2f\n", divided);

    return 0;
}

