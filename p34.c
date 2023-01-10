// C program to delete an element in array at specified position.

#include<stdio.h>

int main()
{
    int n,pos,i;
    printf("Enter the size of arrary:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the postion form where you want to delete element:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    return 0;
}