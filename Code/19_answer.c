/*19.	Write a C program to print Floyd's Triangle.*/
#include <stdio.h>

int main() {
    int rows, num = 1;
    
    printf("FLOYD'S TRIANGLE:\n");
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("\nFloyd's Triangle (%d rows):\n", rows);
    
    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}