#include <stdio.h>

int main() {
    int num1, num2, calculate;
    char operator;

    printf("Value of number 1: ");
    scanf("%d", &num1);  
    printf("Value of number 2: ");
    scanf("%d", &num2); 
    printf("Enter any operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    if (operator == '+') {
        calculate = num1 + num2;
        printf("Result of %d + %d = %d\n", num1, num2, calculate);
    } 
    else if (operator == '-') {
        calculate = num1 - num2;
        printf("Result of %d - %d = %d\n", num1, num2, calculate);
    } 
    else if (operator == '*') {
        calculate = num1 * num2;
        printf("Result of %d * %d = %d\n", num1, num2, calculate);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            calculate = num1 / num2;
            printf("Result of %d / %d = %d\n", num1, num2, calculate);
        } else {
            printf("Error: Division by zero is invalid.\n");
        }
    } 
    else {
        printf("Invalid operator.\n");
    }
    return 0;
}