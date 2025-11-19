// Write a C program to implement a linear search and binary search on an array.
// How It Works

// You check each element one by one from the start of the array.

// If the element matches the target → return its index.

// If you reach the end → element not found.

// When to Use

// ✔ Works on any array (sorted or unsorted)
// ✔ Simple
// ✘ Slow for large arrays
#include<stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; 

}
int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}