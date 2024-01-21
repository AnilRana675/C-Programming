//Positive, Negative, or Zero: Write a program to determine whether a given number is positive,negative, or zero.
#include <stdio.h>

int main() {
   int num;
   
   printf("Name: Anil Rana\nRoll no: 2\nDescription: Positive,Negetive or Zero");
   printf("Enter a number: ");
   scanf("%d", &num);

   if (num > 0) {
       printf("%d is positive.\n", num);
   } else if (num < 0) {
       printf("%d is negative.\n", num);
   } else {
       printf("%d is zero.\n", num);
   }

   return 0;
}
