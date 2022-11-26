#include<stdio.h>
main()
{
	int i,num,fact=1;
	printf(" Enter number value :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("\n factorial=%d",fact);
	}
}
