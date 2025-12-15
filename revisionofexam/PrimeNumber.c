// 4.	create a Prime Number Generator program that uses a for loop to find and display all
//  prime numbers within a specified range. The program will prompt the user to input a number,
//   and then it will display all the prime numbers from 1 to that number.

#include<stdio.h>
int main(){
    int num,i,j,isPrime;

    printf("Enter a number :");
    scanf("%d",&num);

    printf("Prime Numbers from 1 to %d are:\n",num);
    for(i = 2 ; i<= num; i++){
        isPrime = 1 ;
        for(j = 2 ; j<i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
        
    }
    printf("\n");
    return 0;
}