// C program to create Simple Calculator AND Days of week using switch case.
#include<stdio.h>
#include<math.h>

int main()
{
    int sum,subst,multi,division,power,operation,days,weeks;
    float  a,b,percent;
    printf("Enter the value of a and b: ");
    scanf("%f %f",&a,&b);
    printf("Enter number of Days to calculate week:");
    scanf("%d",&days);
    printf("Enter the operation you want to do 1 for sum, 2 for substraction, 3 for multiplication and 4 for divison,5 to calculate number of weeks:");
    scanf("%d",&operation);
    
    sum= a+b;
    subst= a-b;
    multi=a*b;
    division=a/b;
    weeks = (days % 365) / 7;
   

    switch(operation)
    {
    case 1:printf("%d",sum);
    break;
    case 2:printf("%d",subst);
    break;
    case 3:printf("%d",multi);
    break;
    case 4:printf("%d",division);
    case 5:printf("%d",weeks);
    break;
   
}
    

    return 0;
}