// C program to calculate total electricity bill
#include<stdio.h>

int main()
{
    float a,b;
    printf("Enter the amount of unit:");
    scanf("%f",&a);
    b=a*4.22; //Here 4.22 is the charge of electrisity per unit
    printf("The electrisity bill of %.2f unit is %.2f",a,b);
    return 0;
}