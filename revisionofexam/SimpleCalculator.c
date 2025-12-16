// 5.	build a Simple Calculator program in C that performs basic arithmetic 
// operations like addition, subtraction, multiplication, and division.
// The program will make use of different types of operators in C: 
// arithmetic operators, relational operators, and logical operators.


#include<stdio.h>

int main(){
    int num1, num2;
    char op;
    int Result;

    printf("Enter any 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter any operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    if(op == '+'){
        Result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, Result);  // Fixed
    }
    else if(op == '-'){
        Result = num1 - num2;
        printf("Result: %d - %d = %.2f\n", num1, num2, Result);  // Fixed
    }
    else if(op == '*'){
        Result = num1 * num2;
        printf("Result: %d * %d = %.2f\n", num1, num2, Result);  // Fixed
    }
    else if(op == '/'){
        if(num2 != 0){
            Result = (float)num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, Result);
        }
        else{
            printf("Error: Division by zero is not allowed!\n");  // Added \n
        }
    }
    else{
        printf("Error: Invalid operator! Please use +, -, *, or /\n");
    }
    
    return 0;  // Added this
}