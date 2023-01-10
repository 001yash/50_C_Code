// C program to print multiplication table of a number.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number whose table you want to print:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        b=a*i;
        printf("%d\n",b);
    }
    return 0;
}