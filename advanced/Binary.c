// Write a C program to implement a linear search and binary search on an array. how to work with linear and binary search

#include<stdio.h>
int BinarySearch(int arr[],int size,int key){
    int low = 0; high= size -1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] == key)
         return mid;
        else if(key < arr[mid])
         high = mid -1;
        else
         low = mid +1;
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);

    if(result == -1)
        printf("Not Found\n");
    else
        printf("Found at index %d\n", result);

    return 0;
}