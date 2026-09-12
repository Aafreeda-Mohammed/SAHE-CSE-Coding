#include<stdio.h>
int factorial(int n);
int main()
{
	int n,fact;
	printf("Enter the n value");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d",fact);
}
int factorial(int n)
{
	int fact;
	if(n==1)
	{
		return 1;
	}
	else
	{
		fact=n*factorial(n-1);
	}
	return fact;
}
