/*35.	Write a menu-driven C program that performs the following operations
 on an 2-D (3X3) array of integers: Find the maximum element Find the minimum
  element Calculate the sum of all elements Exit.*/
#include <stdio.h>

// Function prototypes
void findMax(int arr[3][3]);
void findMin(int arr[3][3]);
void findSum(int arr[3][3]);

int main() {
    int arr[3][3];
    int choice;

    // Input the 3x3 array
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Menu loop
    do {
        printf("\n--- Menu ---\n");
        printf("1. Find Maximum Element\n");
        printf("2. Find Minimum Element\n");
        printf("3. Calculate Sum of All Elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                findMax(arr);
                break;
            case 2:
                findMin(arr);
                break;
            case 3:
                findSum(arr);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to find the maximum element
void findMax(int arr[3][3]) {
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Maximum element: %d\n", max);
}

// Function to find the minimum element
void findMin(int arr[3][3]) {
    int min = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("Minimum element: %d\n", min);
}

// Function to calculate the sum of all elements
void findSum(int arr[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
}
