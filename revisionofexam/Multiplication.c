// 	Create a simple Multiplication Table Generator using loops in C programming. 
// The program will allow the user to input a number, and it will generate and display
//  the multiplication table for that number, from 1 to 10. 
//  This project will demonstrate the use of loops in C, specifically the for loop

#include<stdio.h>
int main(){
   int number;
   printf("Enter a number to display its multiplication table: ");
   scanf("%d", &number);
    printf("Multiplication table of %d:\n", number);
    for(int i = 1; i <= 10; i++){
         printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("============================\n");
    return 0;
}