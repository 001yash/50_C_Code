// C program to insert an element in array at specified position.
#include<stdio.h>

int main()
{
    int array[100];
    int position,i,n,value;
    printf("Enter the size of array between 100:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position where you want to enter the number:");
    scanf("%d",&position);
    if(position<0||position>n)
    {
        printf("Enter a valid index size:\n");
    }

    else
    {
    printf("Enter the element which you want to insert:");
    scanf("%d",&value);
    for(i=n;i>=position;i--)
    array[i]=array[i-1];
    
    n++;
    array[position]=value;
    for(i=0;i<n;i++)
    {
    printf("Element in array is:%d\n",array[i]);
    }
    }
    return 0;
}