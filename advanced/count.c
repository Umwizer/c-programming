// Write a C program to count the number of vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // convert to lowercase for simplicity
        if (ch >= 'a' && ch <= 'z') {  // check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
