#include <stdio.h>

int main() 
{
    float marks1, marks2, marks3, average;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &marks3);

    average = (marks1 + marks2 + marks3) / 3;
    char grade;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}