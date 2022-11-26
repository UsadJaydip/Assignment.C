#include<stdio.h>
main()
{
	int i,n,r,s=0;
	
	printf(" Enter any Number : ");
	scanf("%d",&n);
	
	i=n;
	
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(i==s)
	printf(" palindrome Number");
	
	else
	printf(" Not");
}
