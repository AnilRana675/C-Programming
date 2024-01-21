//Write a C program to compute the perimeter and area of a circle with given radius.

#include<stdio.h>
int main()
{
    float r,area;
    printf("Name: Anil Rana\nRollno: 2\nDescription: Area of circle");

    printf("Enter the value of radius(r): ");
    scanf("%f",&r);

    area= r*r*3.14;

    printf("The area of Circle is: %f",area);
    
    return 0;
}
