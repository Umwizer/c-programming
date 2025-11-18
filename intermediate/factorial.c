// Write a C program to calculate the factorial of a number using a for loop.

#include <stdio.h>
int main(){
    int number, i;
    long long fact=1;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n", number, fact);
    return 0;
}
