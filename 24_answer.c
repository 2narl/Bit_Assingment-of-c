/*24.	Write a program to find the sum of the series:*/

#include <stdio.h>

int main() {
    int N, k;
    float sum = 0.0;
    long long num = 1, den = 1, next_fib;
    printf("Enter the number of terms N: ");
    scanf("%d", &N);

    for (k = 1; k <= N; k++) {
        sum += (float)num / den;
        next_fib = num + den;
        den = num;
        num = next_fib;
    }

    printf("Sum of the series up to %d terms is: %.2f\n", N, sum);
    return 0;
}