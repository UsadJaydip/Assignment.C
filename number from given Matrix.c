#include<stdio.h>
main()
{
	int mat[2][2],i,j,trans[2][2];
	
	printf(" \n Enter Matrix Elements :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf(" \n %d",&mat[i][j]);
		}
	}
	printf(" \n Matrix Elements :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" \n %d",&mat[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=mat[i][j];
		}
	}
	printf(" \n transpose Elements :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" \n %d",&trans[i][j]);
		}
		printf("\n");
    }
}
