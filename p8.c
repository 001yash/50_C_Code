// C program to check Least Significant Bit (LSB) and MSB of a number using bitwise operator.
#include<stdio.h>

int main()
{
    int a,b,c=0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Number after swap %d %d",a,b);
    // without third variable
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // printf("\nNumber after swap without third veriable is %d %d",a,b);
    return 0;
}