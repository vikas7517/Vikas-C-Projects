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
		sum=(sum*10)+r;
		n=n/10;
		
	}
	if(temp==sum)
	{
		printf("\n palindrone number");
	}
	else
	{
		printf("\n no palintrone number");
	}
}