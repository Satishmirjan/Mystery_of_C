#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int result = factorial(5);
    printf("Factorial of 5 is: %d\n", result);

    return 0;
}

/* Sample Output:
Factorial of 5 is: 120
*/
