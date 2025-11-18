// Write a C program to display the multiplication table of a given number.
#include <stdio.h>
int main() {    
    int number, i;
    // Ask the user for an integer
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Display the multiplication table
    printf("Multiplication table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}