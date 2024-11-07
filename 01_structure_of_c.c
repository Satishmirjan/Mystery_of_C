/* 
 * Program: Basic Structure of a C Program
 * Description: This program demonstrates the basic structure of a C program,
 * including comments, directives, global variables, main function, and custom functions.
 */

#include <stdio.h>  // Include standard I/O library for printf and scanf functions

// Global variable declaration
int globalVar = 10;

/* 
 * Function: addTwoNumbers
 * Description: A simple function that takes two integers as parameters, adds them,
 * and returns the result.
 */
int addTwoNumbers(int a, int b) {
    return a + b;  // Return the sum of a and b
}

/*
 * Function: main
 * Description: The entry point of the C program where execution begins.
 */
int main() {
    // Local variable declaration
    int num1 = 5;
    int num2 = 15;
    int result;

    // Calling the addTwoNumbers function
    result = addTwoNumbers(num1, num2);

    // Printing the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);
    
    // Accessing the global variable
    printf("The value of the global variable is: %d\n", globalVar);

    return 0;  // Return 0 to indicate successful execution
}
