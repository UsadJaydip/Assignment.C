#include<stdio.h>
main()
{
	int a[100],n,i,max;
	printf(" Enter  Size of array :");
	scanf(" %d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf(" Maximum Value of array : %d ",max);
}
