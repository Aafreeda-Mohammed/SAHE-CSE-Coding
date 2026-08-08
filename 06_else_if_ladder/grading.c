#include<stdio.h>
int main()
{
	int n;
	printf("enter marks");
	scanf("%d",&n);
	if(n>90&&n<=100)
	{
		printf("Grade A");
	}
	else if(n>80&&n<=90)
	{
		printf("Grade B ");
	}
	else if(n>70&&n<=80)
	{
		printf("Grade C");
	}
	else if(n>60&&n<=70)
	{
		printf("Grade D");
	}
	else if(n>50&&n<=60)
	{
		printf("Grade E");
	}
	else if (n>=35&&n<=50)
	{
		printf("just pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
