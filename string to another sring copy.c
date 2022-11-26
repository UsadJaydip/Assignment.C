#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	
	printf(" Enter name :");
	scanf("%s",str1);
	
	strcpy(str2,str1);
	
	printf(" copied name = %s",str2);
	
}
