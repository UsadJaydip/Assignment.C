#include<stdio.h>
main()
{
	int a[100],i,n,p,q;
	
	printf(" Enter of array : ");
	scanf("%d",&p);
	
	printf(" \n Enter of elements :");
	
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" \n Enter position that you want to insert : ");
	scanf(" \n %d",&n);
	
	printf(" \n Enter that tou want to insert :");
	scanf(" \n %d",&q);
	
	for(i=p;i>=n;i--)
	{
		a[i]=a[i-1];
	}
	a[n]=q;
	p++;
	printf(" \n Resultant array elements :");
	
	for(i=0;i<q;i++)
	{
		printf(" \n %d",a[i]);
	}
}
