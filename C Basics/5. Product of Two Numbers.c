//Write a C program that accepts two integers from user and calculates the product of the two integers.

#include <stdio.h>
int main()
{
    int x, y, multiple;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Multiple of two Integer");

    printf("\nEnter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    multiple= x*y;

    printf("The sum of X and Y is: %d",multiple);

    return 0;
}
