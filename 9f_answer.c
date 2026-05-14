/*9f.	Write a C program to find the largest among three numbers entered by the user
 using only the conditional (ternary) operator. Also, extend the program to check whether
  a given number is even or odd using the same operator*/
#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", largest);


    (largest % 2 == 0) ? printf("%d is Even\n", largest) : printf("%d is Odd\n", largest);
    
    

    return 0;
}
