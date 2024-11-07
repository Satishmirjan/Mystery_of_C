#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 15;

    // if statement
    printf("if statement:\n");
    if (a < b) {
        printf("a is less than b\n");
    }

    // if-else statement
    printf("\nif-else statement:\n");
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    // if-else if-else ladder
    printf("\nif-else if-else ladder:\n");
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is less than b\n");
    }

    // nested if
    printf("\nnested if statement:\n");
    if (a < b) {
        if (c > a) {
            printf("c is greater than a and a is less than b\n");
        } else {
            printf("c is not greater than a but a is less than b\n");
        }
    }

    // switch statement
    printf("\nswitch statement:\n");
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}

/*if statement:
a is less than b

if-else statement:
a is not greater than b

if-else if-else ladder:
a is less than b

nested if statement:
c is greater than a and a is less than b

switch statement:
Wednesday
*/