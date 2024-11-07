#include <stdio.h>

// A simple function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int result = square(4);  // Calling the function
    printf("Square of 4 is: %d\n", result);

    return 0;
}

/* Sample Output:
Square of 4 is: 16
*/
