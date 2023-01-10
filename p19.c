// C program to calculate factorial of a number.
#include<stdio.h>
 
 int main()
 {
  int n,factorial=1;
printf("Enter the number whose factorial you want print:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  factorial *=i;
}
printf("The factoril of %d is %d",n,factorial);
  return 0;
 }