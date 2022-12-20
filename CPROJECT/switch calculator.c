#include<stdio.h>
main()
{
	int a,b,ch;
	float c;
	
	
	printf("\n enter two number");
	scanf("%d%d",&a,&b);
	printf("\n1.addition \n2.substraction \n3.multiplication \n4.division \n5.exit");
	printf("\n enter your choise");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\n adiition=%f",c);
			break;
		case 2:
			c=a-b;
			printf("\n substraction=%f",c);
			break;
			
		case 3:
			c=a*b;
			printf("\n multiplication=%f",c);
			break;
			
		case 4:
			c=a/b;
			printf("\n division=%f",c);
			break;
			
		case 5:
			exit(0);
			break;
	}

}
