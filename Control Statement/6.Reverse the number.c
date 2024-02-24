//Program to reverse the number. example 321 -> 123, 1234 -> 4321

#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not allowed.\n");
        return 1;
    }

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number = %d\n", reversedNumber);

    return 0;
}
