
// 2.	create a Simple Invoice Generation System that uses the printf function to display formatted output.
// The program will accept user input for the details of an invoice 
// (such as the item name, price, quantity, and calculate the total), and display a neatly formatted invoice


#include<stdio.h>
int main(){
    char item[50];
    int quantity;
    float price, total;


    printf("Enter item name: ");
    scanf("%s", item);
    printf("Enter quantity: "); 
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%f", &price);
    total = quantity * price;
    printf("Invoice:\n");
    printf("Item: %s\n", item);
    printf("Quantity: %d\n", quantity);
    printf("Price per item: %.2f\n", price);
    printf("Total amount: %.2f\n", total);
    return 0;
}