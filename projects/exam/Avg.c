//Write program in c language to display the marks of student scored in four subjects like Math,English,Programming
//then Ethics . Each Subjects is out of 20 marks . Enter the student marks in each subject  during executions
//of your program do the following

//a) calculate the total score of the student in 4 subjects
//b) calcaluate the totalscore in percentage in 4 subjects
//c) then calculate the average
//d) f the average is greater than 80 and less than or equal ot 100 display "Best sutent " other cases"Good Students"
#include<stdio.h>
int main(){
    int Math , English , Programming , Ethics , sum , avg ; 
    printf("Enter  your marks of Math : ");
    scanf("%d",&Math);
    printf("Enter  your marks of English : ");
    scanf("%d",&English);
    printf("Enter  your marks of Programming : ");
    scanf("%d",&Programming);
    printf("Enter  your marks of Ethics : ");
    scanf("%d",&Ethics);
    sum = Math + English + Programming + Ethics ;
    printf("Total score of the student in 4 subjects is : %d\n",sum);
    float percentage = (sum / 80.0) * 100 ;
    printf("Total score in percentage in 4 subjects is : %.2f\n",percentage);
    avg = sum / 4 ;
    printf("Average score is : %d\n",avg);
    if(avg >80 && avg <=100){
        printf("Best Student");
    }
    else{
    printf("Good Student");
    }
}