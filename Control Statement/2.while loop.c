//Use a while loop to print even numbers up to 20.

#include<stdio.h>
int main(){
    int num = 2;
    while (num <= 20){
        printf("%d", num);
        num += 2;
    }
    printf("\n");

    return 0;
}