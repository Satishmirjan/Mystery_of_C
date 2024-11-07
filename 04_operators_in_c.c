#include <stdio.h>

int main() {
    // Arithmetic Operators
    int a = 10, b = 3;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus (remainder)

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b is %d\n", a == b); // Equal to
    printf("a != b is %d\n", a != b); // Not equal to
    printf("a > b is %d\n", a > b);   // Greater than
    printf("a < b is %d\n", a < b);   // Less than
    printf("a >= b is %d\n", a >= b); // Greater than or equal to
    printf("a <= b is %d\n", a <= b); // Less than or equal to

    // Logical Operators
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("x && y is %d\n", x && y); // Logical AND
    printf("x || y is %d\n", x || y); // Logical OR
    printf("!x is %d\n", !x);         // Logical NOT

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);    // Bitwise AND
    printf("a | b = %d\n", a | b);    // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);    // Bitwise XOR
    printf("~a = %d\n", ~a);          // Bitwise NOT
    printf("a << 1 = %d\n", a << 1);  // Left shift
    printf("a >> 1 = %d\n", a >> 1);  // Right shift

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    int c = 5;
    c += 2; // Equivalent to c = c + 2
    printf("c += 2 => %d\n", c);
    c -= 1; // Equivalent to c = c - 1
    printf("c -= 1 => %d\n", c);
    c *= 3; // Equivalent to c = c * 3
    printf("c *= 3 => %d\n", c);
    c /= 3; // Equivalent to c = c / 3
    printf("c /= 3 => %d\n", c);
    c %= 2; // Equivalent to c = c % 2
    printf("c %%= 2 => %d\n", c);

    // Increment and Decrement Operators
    printf("\nIncrement and Decrement Operators:\n");
    int d = 5;
    printf("d++ = %d\n", d++); // Post-increment (returns d, then increments)
    printf("++d = %d\n", ++d); // Pre-increment (increments, then returns d)
    printf("d-- = %d\n", d--); // Post-decrement (returns d, then decrements)
    printf("--d = %d\n", --d); // Pre-decrement (decrements, then returns d)

    // Conditional (Ternary) Operator
    printf("\nConditional (Ternary) Operator:\n");
    int e = (a > b) ? a : b; // If a > b, e = a; else e = b
    printf("e = (a > b) ? a : b => %d\n", e);

    // Sizeof Operator
    printf("\nSizeof Operator:\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
