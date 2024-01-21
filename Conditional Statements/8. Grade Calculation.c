//Grade Calculation: Write a program to calculate the grade of a student based on their marks in multiple subjects.

#include <stdio.h>

int main() {
   int numSubjects, i;
   float marks, total = 0, average;
   char grade;

   printf("Name: Anil Rana\nRoll no: 2\nDescription: Grade Calculation");
   printf("Enter the number of subjects: ");
   scanf("%d", &numSubjects);

   for (i = 1; i <= numSubjects; ++i) {
       printf("Enter marks for subject %d: ", i);
       scanf("%f", &marks);

       // Input validation (ensure marks are within valid range)
       while (marks < 0 || marks > 100) {
           printf("Invalid marks. Please enter marks between 0 and 100: ");
           scanf("%f", &marks);
       }

       total += marks;
   }

   average = total / numSubjects;

   // Determine grade based on average
   if (average >= 90) {
       grade = 'A';
   } else if (average >= 80) {
       grade = 'B';
   } else if (average >= 70) {
       grade = 'C';
   } else if (average >= 60) {
       grade = 'D';
   } else {
       grade = 'F';
   }

   printf("\nTotal marks: %.2f\n", total);
   printf("Average marks: %.2f\n", average);
   printf("Grade: %c\n", grade);

   return 0;
}
