// Write a C program to find the largest of three numbers entered by the user.

#include <stdio.h>
int main() {
    int num1, num2, num3, largest;

    // Ask the user for three integers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}