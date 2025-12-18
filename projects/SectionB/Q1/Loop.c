//i int test[6] = {20,30,40,50,60,70}
//a) write proram in c language to display all the elements of the given array using for loop
//b) display the memory address of each element using for loop
//c) display the memory address of the first element in array using a pointer

#include<Stdio.h>
int main(){
    int test[6] = {20,30,40,50,60,70};
    int *ptr = test;
    for(int i=0;i<6;i++){
        printf("Element of test [%d] is %d\n",i,test[i]);
    }
    for (int i=0;i<6;i++){
        printf("Address of test [%d] is %d\n",i,&test[i]);
    }
    printf("Address of first element is %d\n",&ptr[0]);
}