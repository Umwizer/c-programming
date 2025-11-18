// Write a C program to find the largest and smallest elements in an array.

#include <stdio.h>
int main(){
    int n, i;
    int largest, smallest;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest elements
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}