// C program to check sparse AND transpose matrix
#include<stdio.h>

int main()
{
    int n,m,i,j;
    printf("Enter the size of 1st and 2nd arrary respectively:");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];;
    printf("Enter the element of arrary:");
    for(i=0;i<n;i++)
    {
    for( j=0;j<m;j++)
    
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for ( j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for ( j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    
    }
    

    printf("Transpose of Matrix\n");
      for(int i=0;i<m;i++)
    {
        for ( j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}