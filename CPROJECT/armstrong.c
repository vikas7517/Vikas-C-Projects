#include<stdio.h>
main()
{
	int n,r,temp,sum=0;
	printf("\n enter number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n armstrong number");
		
	}
	else
	{
		printf("\n not armstrong number");
		printf("\n please enter the correct number");
	}
}
