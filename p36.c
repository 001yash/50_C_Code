// C program to find second largest number and Sorting Using Bubble sort in an array.
#include<stdio.h>

int main()
{
    int n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of arrary:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       
    }
    printf("After shorting:\n");
     for(int i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
        printf("Second largest number is:%d",a[1]);
    return 0;
}