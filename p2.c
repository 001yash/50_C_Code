// C program to find area of a triangle if base and height are give
#include<stdio.h>

int main()
{
    int base,height,area;
    printf("Enter the the value of base ");
    scanf("%d",&base);
    printf("Enter the the value of height ");
    scanf("%d",&height);
    area=(1*base*height)/2;
    printf("The area of triangle is %.2f",(float)area);

    return 0;
}