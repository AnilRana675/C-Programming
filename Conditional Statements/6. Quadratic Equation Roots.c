//Quadratic Equation Roots: Write a program to solve a quadratic equation and find its roots (real or imaginary).

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Quadratic Equation");
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots based on the discriminant
    if (discriminant > 0) {
        // Roots are real and different
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Roots are real and equal
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2f\n", root1);
    } else {
        // Roots are complex and different
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
