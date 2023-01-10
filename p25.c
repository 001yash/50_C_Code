        //   C program to print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
  int n,a=0,b=1,nxt_term=0;
  printf("enter a no:");
  scanf("%d",&n);
  printf("fibonacci series:%d,%d,",a,b);
  nxt_term=a+b;
  while(nxt_term<=n)
  {
      printf("%d,",nxt_term);
      a=b;
      b=nxt_term;
      nxt_term=a+b;
  }
  return 0;
}