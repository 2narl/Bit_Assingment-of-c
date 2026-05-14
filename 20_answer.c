/*20.	Write a C program to print a hollow square pattern:*/
#include <stdio.h>

int main() {
    int size;
    
    printf("HOLLOW SQUARE PATTERN:\n");
    printf("Enter size of square: ");
    scanf("%d", &size);
    
    if (size < 1) {
        printf("Size must be >= 1\n");
        return 1;
    }
    
    printf("\nHollow Square (%dx%d):\n", size, size);
    
    // Outer loop for rows
    for (int i = 0; i < size; i++) {
        // Inner loop for columns
        for (int j = 0; j < size; j++) {
            // Print '*' for border, ' ' for inside
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}