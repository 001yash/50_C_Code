// C program to check whether a matrix is Identity matrix or not
#include<stdio.h>
#include<math.h>

int main()
{
    int x,a[100][100],sum=0;
    printf("Enter the size of matrix\n");
    scanf("%d",&x);
    printf("Enter the values in matrix\n");
    for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
    scanf("%d",&a[i][j]);}}
    for(int i=0;i<x;i++){
    for(int j=0;j<x;j++)
    {
        if (i==j)
        {
            if(a[i][j]!=1)
            {
                  sum++;
            }
        }
        else
        {
            if(a[i][j]!=0)
            {
                sum++;
            }
        }
        
        
   
     }}
    if(sum==0)
    printf("Matrix is identity matrix");
    else
    printf("The matrix is not identity matrix");
    return 0;


}