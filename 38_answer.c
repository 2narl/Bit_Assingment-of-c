/*38.. Write a program to take n numbers and display the sum of even numbers and odd numbers separately.*/
#include <stdio.h>

int main() {
    int n, i;
    int even_sum = 0, odd_sum = 0;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    // Input n numbers from the user
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Process each number to find even/odd sums
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    // Display the results
    printf("\nSum of Even numbers: %d", even_sum);
    printf("\nSum of Odd numbers: %d\n", odd_sum);

    return 0;
}
 