#include <stdio.h>

int main()
 {
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    if
     (num1 >= num2) {
        if 
        (num1 >= num3) {
            printf("%.2f is the largest number.\n", num1);
        } else {
            printf("%.2f is the largest number.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%.2f is the largest number.\n", num2);
        } else {
            printf("%.2f is the largest number.\n", num3);
        }
    }

    return 0;
}