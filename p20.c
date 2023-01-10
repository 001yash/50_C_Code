      // plaidraom (If enter number is equal to the revese of number than number is palidrome)
                                      
 #include<stdio.h>
 
 int main()
 {
  int number,temp,rem,sum=0;
  printf("Enter the number:");
  scanf("%d",&number);
  temp=number;
  while(number>0)
  {
    rem =number%10;
    sum=sum*10+rem;
    number/=10;
  }
  if(temp==sum)
 {
  printf("%d is an Palindrome number",temp);
 }
  else
  {
  printf("%d is not an Palindrome number",temp);
  }
  return 0;
 }