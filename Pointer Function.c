#include<stdio.h>
main()
{
	int *p,*q,r,a,b;
	printf(" Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	p=&a;
	q=&b;
	
	r=*p+*q;
	printf(" Sum Of Number : %d ",r);
}
