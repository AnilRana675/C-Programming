//Largest of Three Numbers: Write a program to find the largest among three numbers.

#include <stdio.h>
int main()
{
    int a,b;

    printf("Name: Anil Rana\nRoll no: 2\nDescription: ALargest of Three Numbers");
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(a>b){
    printf("%d is the greater than %d\n",a,b);
  }
    else if(b>a){
    printf("%d is greater than %d",b,a);
  }
  else{
    printf("both a and b have same value");
  }
  return 0;
}
