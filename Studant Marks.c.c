#include<stdio.h>
void main()
{
	int marks;
	
	printf("/n Enter marks of studant :");
	scanf("%d",&marks);
	
	if(marks>70 && marks<=80)
	{
		printf("\n first class");
	}
	else if(marks>60 && marks<=70)
	{
		printf("\n second class");
	}
	else if(marks>35 && marks<=60)
	{
		printf("\n just pass");
	}
	else if(marks<35)
	{
		printf("\n fail");
	}
	else
	{
		printf("\n something went wrong");
	}
}
