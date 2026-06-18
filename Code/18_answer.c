/*18.Write a program to read a number and determine whether it is a palindrome or not.. */
#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    // Read a number from user
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original = n; // Store the original value for later comparison

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder; 
        n /= 10;                      
    }

    
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
