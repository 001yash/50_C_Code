// C program to print all even numbers AND sum of it from 1 to n

#include<stdio.h>

int main()
{
    int a,sum=0;
    printf("Enter the value of nth term:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    { 
        if(i%2==0)
        {
        printf("%d\n",i);
        sum=sum+i;
        }
        
    }
printf("sum of nth term is %d",sum);
    return 0;
}