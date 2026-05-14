/*31.Write a program to display the addition of two matrix. Your program should include one function 
named input to enter the values of two matrix, one function named add to perform addition of two matrix
 and one function named display to show the result obtained after addition of two matrix.*/
#include <stdio.h>

// Function to enter values for a matrix
void input(int matrix[10][10], int rows, int cols, char name) {
    printf("Enter elements of Matrix %c (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to perform addition of two matrices
void add(int m1[10][10], int m2[10][10], int res[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Function to show the result obtained after addition
void display(int matrix[10][10], int rows, int cols) {
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int rows, cols;

    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    // Call input function for both matrices
    input(mat1, rows, cols, 'A');
    input(mat2, rows, cols, 'B');

    // Call add function to perform addition
    add(mat1, mat2, result, rows, cols);

    // Call display function to show the result
    display(result, rows, cols);

    return 0;
}
