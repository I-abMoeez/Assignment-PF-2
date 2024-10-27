#include <stdio.h>

int main() 
{
    float totalAmount, finalAmount;
    float discount;
    printf("Enter the total amount: ");
    scanf("%f", &totalAmount);
    if (totalAmount > 5000)
     {
        discount = 0.20;
    } else if 
    (totalAmount >= 3000) {
        discount = 0.10;
    } else {
        discount = 0.0;
    }
    finalAmount = totalAmount - (totalAmount * discount);

    printf("Total Amount: %.2f\n", totalAmount);
    printf("Discount: %.2f%%\n", discount * 100);
    printf("Final Amount after discount: %.2f\n", finalAmount);

    return 0;
}