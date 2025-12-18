
//create eligibility checker program that uses logical operators to determing whether a person is
//eligible to vote or drive based on their age and certain conditions. The program will check two conditions using
//logicalOperators like And,Or,Not, and then print appropriate messages based on conditions.

#include<stdio.h>
int main(){
   int ages,licences;
   printf("Enter your age:");
   scanf("%d",&ages);
   printf("Enter your driving licence:");
   scanf("%d",&licences);
   if(ages>=18){
     printf("You are eligible to Vote\n");
   }
    if (licences == 1 && ages >=18)
    {
        printf("You are elgible to drive");
    }if(licences !=1){
        printf("Your licence is invalid");
    }if(ages < 18  || licences !=1){
        printf("You aren't allowed to drive");
    }else{
        printf("enter valid age or valid licences");
    }
}