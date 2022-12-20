#include<stdio.h>
void fact();
main()
{
fact();
}
void fact()
{
  int i,n,fact=1;
  printf("\n enter number=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
fact=fact*i;
  }
  printf("factorial=%d",fact);
}
