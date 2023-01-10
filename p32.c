// C program to copy one array to another array.
#include <stdio.h>
  
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n], i;

    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    printf("The first array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\nThe second array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
