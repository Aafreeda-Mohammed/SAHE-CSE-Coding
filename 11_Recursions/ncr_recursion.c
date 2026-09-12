#include<stdio.h>
int factorial(int);
int main()
{
	int n,r,f,f1,f2,ncr;
	printf("enter n and r");
	scanf("%d %d",&n,&r);
	f=factorial(n);
	f1=factorial(r);
	f2=factorial(n-r);
	ncr=f/(f1*f2);
	printf("ncr=%d",ncr);
	return 0;
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
