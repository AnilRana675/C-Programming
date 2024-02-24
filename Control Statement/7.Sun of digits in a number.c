//Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15

#include <stdio.h>

int main() {
   int num, sum = 0, digit;

   printf("Enter a positive integer: ");
   scanf("%d", &num);

   if (num < 0) {
       printf("Invalid input: Please enter a positive integer.\n");
       return 1;
   }

   while (num > 0) {
       digit = num % 10;  
       sum += digit;      
       num /= 10;         
   }

   printf("Sum of digits = %d\n", sum);

   return 0;
}
