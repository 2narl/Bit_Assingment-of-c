/*22. Write a program to print the sum of the following series:*/
#include <stdio.h>

int main() {
    int N, k;
    float sum = 0.0;
    printf("Enter the number of terms N: ");
    scanf("%d", &N);

    for (k = 1; k <= N; k++) {
        int denominator = (k * (k + 1)) / 2;
        float term = 1.0 / denominator;
        if (k % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    printf("Sum of the series up to %d terms is: %f\n", N, sum);
    return 0;
}