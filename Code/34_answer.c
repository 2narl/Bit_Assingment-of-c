/*34.Write a program to dynamically create a 2D matrix based on
 user input for rows and columns. Display the original matrix, then
  rotate the matrix by 90 degrees clockwise, and display the rotated matrix.*/
#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free allocated memory
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to display a matrix
void displayMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Dynamically allocate the original matrix
    int** matrix = allocateMatrix(r, c);

    printf("Enter elements for a %dx%d matrix:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, r, c);

    // Allocate a new matrix for rotation 
    int** rotated = allocateMatrix(c, r);

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            rotated[j][(r - 1) - i] = matrix[i][j];
        }
    }

    printf("\nRotated Matrix (90 degrees clockwise):\n");
    displayMatrix(rotated, c, r);

    
    freeMatrix(matrix, r);
    freeMatrix(rotated, c);

    return 0;
}
