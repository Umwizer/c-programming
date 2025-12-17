// 13.	Create a simple calculator that can perform basic arithmetic operations like addition, 
// subtraction, multiplication, and division. We'll structure the code using functions for each
//  operation and then call them from the main function.

#include<stdio.h>

float add(float a,float b)
{
    return a + b;
}
float sub(float a , float b){
    return a-b;
}
float multi(float a , float b){
    return a*b;
}
float div(float a ,float b){
    return a/b;
}
int main(){
    float x ,y;
    int choice;
    printf("Enter two Number");
    scanf("%f %f", &x,&y);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
  if(choice==1)
        printf("Result: %.2f", add(x,y));
    else if(choice==2)
        printf("Result: %.2f", sub(x,y));
    else if(choice==3)
        printf("Result: %.2f", mul(x,y));
    else if(choice==4)
        printf("Result: %.2f", div(x,y));
    else
        printf("Invalid choice");

    return 0;
}