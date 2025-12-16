// 7.	create a Multiplication Table Generator using nested loops in C programming.
// The program will generate the multiplication table for numbers from 1 to a given limit
// and display the results in a structured format.


#include<stdio.h>
int main(){
    int limit;
    printf("Enter the multiplication Table:");
    scanf("%d",&limit);
    printf("\n=== Multiplication Table\n",limit);

    for(int i=1;i<limit;i++){
       printf("Multiplocatio table of %d\n",i);
       for(int j=1;j<=10;j++){
        printf("%d * %d =%d\n",i,j, i*j);
       }
       printf("\n");
    }
    return 0;
}