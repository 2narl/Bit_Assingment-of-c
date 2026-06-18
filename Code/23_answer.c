/*23.	Write a program to find the sum of the series:*/
#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    float x, sum = 0.0, term;
    int N, k;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms N: ");
    scanf("%d", &N);

    for (k = 1; k <= N; k++) {
        int power = 2 * k - 1;
        long long fact = factorial(power);
        term = pow(x, power) / fact;
        if (k % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    printf("Sum of the series up to %d terms is: %f\n", N, sum);
    return 0;
}