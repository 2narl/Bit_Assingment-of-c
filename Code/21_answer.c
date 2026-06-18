/* 21.	Write a C program to print a butterfly pattern:*/
#include <stdio.h>

int main() {
    int n;
    
    printf("BUTTERFLY PATTERN:\n");
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Rows must be >= 1\n");
        return 1;
    }
    
    printf("\nButterfly Pattern (%d):\n", n);
   
    
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}