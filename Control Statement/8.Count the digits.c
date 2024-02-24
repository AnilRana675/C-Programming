//Write a program to count the digits in a number.

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Name: Anil Rana\nRoll no: 3\nDescription: Count the digits");

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Counting digits for negative numbers is not supported.\n");
        return 1;
    }

    while (num != 0) {
        count++;
        num /= 10;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
