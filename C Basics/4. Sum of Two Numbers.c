//Write a C program that accepts two integers from user and calculates the sum of the two integers.

#include <stdio.h>
int main()
{
    int x, y, sum;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Sum of two Integer");

    printf("\nEnter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    sum= x+y;

    printf("The sum of X and Y is: %d",sum);

    return 0;
}
