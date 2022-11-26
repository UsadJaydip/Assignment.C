#include<stdio.h>
main()
{
	int n,i,count=0;
	printf(" \n Enter any Number :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
	    if(n%i==0)
	    {
	    	count++;
		}
		
}
	if(count==2)

	printf(" Prime Number");
	
	else
	
	printf(" Not prime number");
}
