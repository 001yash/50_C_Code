// C program to find maximum between three numbers using conditional operator AND Ternary Operator.
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("A is greater");
    else if (b>a && b>c)
    {
        printf("B is greater");
    }
    else if(c>a && c>b)
    {
        printf("C is greater");
    }
    else if(a=b=c)
    {
        printf("All number are equal");
    }
    return 0;
}