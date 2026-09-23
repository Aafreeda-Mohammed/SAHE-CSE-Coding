#include<stdio.h>
int main()
{
	int b,n,r,i,fact=1,sum=0;
	printf("Enter the n value : ");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		r=n%10;
		i=1,fact=1;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(b==sum)
	{
		printf("Strong");
	}
	else
	{
		printf("Not a strong number");
	}
	return 0;
}
