//Write a program that uses a for loop to calculate the sum and average of an array of integers.

#include <stdio.h>
int main(){

    int num,i; 

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Multiplaction table of %d \n",num);

    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }

    printf("\n");

    return 0;

}