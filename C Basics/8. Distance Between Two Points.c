//Write a C program to calculate the distance between two points.

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Distance Between Two Points");

    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the difference in x and y coordinates
    float difference_x = x2 - x1;
    float difference_y = y2 - y1;

    // Square the differences
    float squared_difference_x = difference_x * difference_x;
    float squared_difference_y = difference_y * difference_y;

    // Add the squared differences
    float sum_of_squares = squared_difference_x + squared_difference_y;

    // Calculate the square root of the sum using the built-in sqrt function
    distance = sqrt(sum_of_squares);

    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}
