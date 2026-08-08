#include<stdio.h>
int main()
{
	int t;
	printf("enter the temp");
	scanf("%d",&t);
	if(t<=10)
	{
		printf("it's very cold");
	}
	else if(t>10&&t<=20)
	{
		printf("cool");
	}
	else if(t>20&&t<=30)
	{
		printf("warm");
	}
	else if(t>30&&t<=40)
	{
		printf("hot");
	}
	else if(t>=40)
	{
		printf("very hot");
	}
	return 0;
}
