/*9c.	Write a C program to swap two numbers without 
using a third variable using    bitwise XOR.*/
#include <stdio.h>

int main() {
    int x, y;

    // Input values for x and y
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swap using bitwise XOR
    if (x != y) {
        x = x ^ y; 
        y = x ^ y; 
        x = x ^ y; 
    }

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

