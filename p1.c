//  C program to perform all arithmetic operations
#include<stdio.h>

int main()
{
    float a,b,sum=0,subs=0,multi=1,div;
    printf("Enter the the value of a:");
    scanf("%f",&a);
    printf("Enter the the value of b:");
    scanf("%f",&b);
    sum=a+b;
    printf("Sum of a and b is %.2f\n",sum);
    subs=a-b;
    printf("Substraction of a & b is %0.2f\n\n",subs);
    multi=a*b;
    printf("Product of a & b is %0.2f\n",multi);
    div=a/b;
    printf("Division of a & b is %0.2f\n",div);
    return 0;
}