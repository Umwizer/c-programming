// Write a C program to swap two numbers using pointers.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;   
    *a = *b;     
    *b = temp;  
}

int main() {
    int x, y;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // pass addresses to function

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
