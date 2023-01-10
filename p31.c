// C program to find sum of all elements of array
#include<stdio.h>

int main()
 {
int n,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("sum of Elemnet in array is:%d ",sum);
    return 0;
 }