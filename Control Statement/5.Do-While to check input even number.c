//Use a do-while loop to check if a user's input is an even number, prompting them to re-eter if not.

#include <stdio.h>
int main(){

int num;

printf("Name: Anil Rana\nRoll no: 3\nDescription: Do-While to check input even number");

do{
    printf("Enter any number: ");
    scanf("%d", &num);
}while (num % 2 !=0);

printf("You entered an even number: %d\n", num);

return 0;
}