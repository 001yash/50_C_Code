// C program to check positive negative or zero using switch case.
#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    switch(a>0)
    {
    case 1:printf("positive");
    break;
    }
    switch(a<0)
    {
        case 1:printf("Negative");
        break;
    }
    switch(a=0)
    {
        case 0:printf("Zero");
        break;
    }
    
    return 0;
}