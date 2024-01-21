//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("Name: Anil Rana\nRollno: 2\nDescription: Perimeter and Area of rectangle");

    printf("\nEnter the value of length: ");
    scanf("%d",&length);

    printf("Enter the value of breadth: ");
    scanf("%d",&breadth);

    area= length*breadth;
    perimeter= 2*(length+breadth);

    printf("The perimeter of rectangle is: %d", perimeter);
    printf("The area of rectangle is: %d", area);

    return 0;
}
