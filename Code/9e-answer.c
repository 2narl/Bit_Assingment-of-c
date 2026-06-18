/*e.	Write a program to demonstrate the difference between prefix (++i, --i) and postfix (i++, i--) increment/decrement operators.*/
#include <stdio.h>

int main() {
    int i = 5, j;

    // Prefix Increment
    j = ++i;
    printf("Prefix Increment:\n");
    printf("i = %d, j = %d\n", i, j);

    // Reset value
    i = 5;

    // Postfix Increment
    j = i++;
    printf("\nPostfix Increment:\n");
    printf("i = %d, j = %d\n", i, j);

    // Reset value
    i = 5;

    // Prefix Decrement
    j = --i;
    printf("\nPrefix Decrement:\n");
    printf("i = %d, j = %d\n", i, j);

    // Reset value
    i = 5;

    // Postfix Decrement
    j = i--;
    printf("\nPostfix Decrement:\n");
    printf("i = %d, j = %d\n", i, j);

    return 0;
}