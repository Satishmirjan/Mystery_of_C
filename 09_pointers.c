#include <stdio.h>

int main() {
    int number = 42;
    int *ptr = &number; // Pointer to the memory address of `number`

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}

/* Sample Output:
Value of number: 42
Address of number: 0x7ffeeabcde98 (example address)
Value at address stored in ptr: 42
*/
