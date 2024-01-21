//Electricity Bill: Write a program to calculate the electricity bill of a customer based on their usage and tariff rates.

#include <stdio.h>

int main() {
    // Declare variables
    float unitConsumed, totalBill;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: Electricity Bill");

    // Input the unit consumed
    printf("Enter the unit of electricity consumed: ");
    scanf("%f", &unitConsumed);

    // Calculate the electricity bill
    if (unitConsumed <= 100) {
        totalBill = unitConsumed * 3.5;
    } else {
        totalBill = 100 * 3.5 + (unitConsumed - 100) * 4.5;
    }

    // Display the total bill
    printf("Electricity Bill: Rs%.2f\n", totalBill);

    return 0;
}

