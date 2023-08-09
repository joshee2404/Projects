#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to divide two numbers
float divide(float num1, float num2) {
    return num1 / num2;
}

int main() {
    printf("Please select operation -\n"
           "1. Add\n"
           "2. Subtract\n"
           "3. Multiply\n"
           "4. Divide\n");

    // Take input from the user
    int select;
    printf("Select operations from 1, 2, 3, 4: ");
    scanf("%d", &select);

    float number_1, number_2;
    printf("Enter first number: ");
    scanf("%f", &number_1);
    printf("Enter second number: ");
    scanf("%f", &number_2);

    switch (select) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", number_1, number_2, add(number_1, number_2));
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", number_1, number_2, subtract(number_1, number_2));
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", number_1, number_2, multiply(number_1, number_2));
            break;
        case 4:
            if (number_2 != 0) {
                printf("%.2f / %.2f = %.2f\n", number_1, number_2, divide(number_1, number_2));
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
