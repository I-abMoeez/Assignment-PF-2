#include <stdio.h>

int main() {
    float temperature;
    int choice;
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);
    if 
    (choice == 1) 
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = (temperature * 9.0 / 5.0) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, fahrenheit);
    } 
    else if (choice == 2) {
    
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = (temperature - 32) * 5.0 / 9.0;
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, celsius);
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}