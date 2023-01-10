// C program to find power and square root of any number.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter power of function:");
    scanf("%f",&b);
    c=pow(a,b);
    printf( "%.2f",c);
   
 double number, squareRoot;

   printf("\nEnter number to find square root: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);
    return 0;
}