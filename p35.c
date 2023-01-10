// C program to search element in array using Linear Search.
#include<stdio.h>
 
 int main()
 {
    int n,i,find,count=0;
    printf("Enter the size of arrary:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number which postion you want ot find:");
    scanf("%d",&find);
    for(i=0;i<n;i++)
    {
        if (a[i]==find)
        {
            printf("%d",i);
           count++;
        }
       
        
    }
    if(count==0)
    {
        printf("Element not found");
    }
    
    return 0;
 }                                  