// C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides of trianlge:");
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b && a!=c)
    {
        printf("Scalene Triangle");
    }
    else if(a=b && a!=c)
    {
        printf("Isoscles Triangle");
    }
    else if(a=b=c)
    {
        printf("Equilateral Triangle");
    }
    return 0;
}