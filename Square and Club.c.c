#include<stdio.h>
main()
{
	int num1,num2,ans,ans1,ans2,ans3,ans4;

    printf("enter number num1");
	scanf("%d",&num1);
	
	printf("enter number num2");
	scanf("%d",&num2);
	
	ans=num1+num2;
	printf("\naddition : %d",ans);
	
	ans1=num1-num2;
	printf("\nsubtraction : %d" , ans1);
	
	ans2=num1*num2;
	printf("\nmultiplication : %d", ans2);
	
	ans3=num1/num2;
	printf("\ndivision : %d", ans3);
	
	ans4=num1%num2;
	printf("\nmodulo : %d", ans4);
}
