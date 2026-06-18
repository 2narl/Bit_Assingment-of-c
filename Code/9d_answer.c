/*d.	Write a function to check if a number is even or odd using a bitwise operator.*/
#include <stdio.h>

int isOdd(int num) {
    return (num & 1); 
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isOdd(n)) {
        printf("%d is Odd.\n", n);
    } else {
        printf("%d is Even.\n", n);
    }

    return 0;
}