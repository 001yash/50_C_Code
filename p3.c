// C program to find all angles of a triangle if two angles are given.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter the value of 1st and 2nd angle: ");
    scanf("%f %f",&a,&b);
    c=180-a-b;
    printf( "Third angle is: %f",c);
    return 0;
}