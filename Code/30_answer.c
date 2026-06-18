/*30.Write a program to swap the contents of two variables using a function and pointers.*/
#include <stdio.h>

// Function prototype to swap two numbers using pointers
void swap(int *ptr1, int *ptr2);

int main() {
    int x, y;

    // Prompt user for input
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// Definition of the swap function
void swap(int *ptr1, int *ptr2) {
    int temp;

   
    temp = *ptr1;  
    *ptr1 = *ptr2; 
    *ptr2 = temp;  
}
