// C program to check alphabet, digit or special character using Conditional operator.
#include<stdio.h>

int main()
{
    char a;
    printf("Enter the number:");
    scanf("%c",&a);
    if((a>='a'&& a<='z') || (a>='A' && a<='Z'))
    {
        printf("A is alphabet");
    }
    else if(a>='0' && a<='9')
    {
        printf("A is number");
    }
    else 
    {
        printf("A is special character ");
    }
    return 0;
}