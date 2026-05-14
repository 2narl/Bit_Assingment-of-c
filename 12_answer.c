
#include <stdio.h>

int main() {
    // Initial values
    int a = 10, b = 3, c = 7;

    // Displaying the initial setup
    printf("Values: a=%d, b=%d, c=%d\n", a, b, c);
    printf("Expression: a + b * c - (c / b) + (a & b) || (c > b) && !(a == b)\n\n");

    printf("Step-by-step evaluation:\n");

    // 1. Parentheses
    printf("1. Parentheses first:\n");
    printf("   (c / b) = %d / %d = %d\n", c, b, c / b);
    printf("   (a & b) = %d & %d = %d\n", a, b, a & b);
    printf("   (c > b) = %d > %d = %d\n", c, b, c > b);
    printf("   (a == b) = %d == %d = %d\n\n", a, b, a == b);

    // 2. Unary
    printf("2. Unary ! (logical NOT):\n");
    printf("   !(a == b) = !%d = %d\n\n", a == b, !(a == b));

    // 3. Multiplication and Division
    printf("3. Arithmetic (*, / have higher precedence than +, -):\n");
    printf("   b * c = %d * %d = %d\n", b, c, b * c);
    printf("   Expression becomes: a + %d - %d + %d || %d && %d\n\n", b * c, c / b, a & b, c > b, !(a == b));

    // 4. Addition and Subtraction
    int arithmeticPart = a + (b * c) - (c / b) + (a & b);
    printf("4. Arithmetic (+, - from left to right):\n");
    printf("   a + (b * c) - (c/b) + (a&b) = %d + %d - %d + %d = %d\n\n", a, b * c, c / b, a & b, arithmeticPart);

    // 5. Logical AND
    int logicalAnd = (c > b) && !(a == b);
    printf("5. Logical AND (&&) before OR (||):\n");
    printf("   (c > b) && !(a == b) = %d && %d = %d\n\n", c > b, !(a == b), logicalAnd);

    // 6. Logical OR
    int finalResult = arithmeticPart || logicalAnd;
    printf("6. Logical OR (||):\n");
    printf("   %d || %d = %d\n\n", arithmeticPart, logicalAnd, finalResult);

    printf("Final result = %d\n", finalResult);

    return 0;
}