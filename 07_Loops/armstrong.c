#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n,r,digit=0,sum=0;
	printf("Enter the n value : ");
	scanf("%d",&n);
	n2=n1=n;
	while(n1>0)
	{
		digit=digit+1;
		n1=n1/10;
	}
	while(n2>0)
	{
		r=n2%10;
		sum=sum+pow(r,digit);
		n2=n2/10;
	}
	if(sum==n)
	{
		printf("Amstrong");
	}
	else
	{
		printf("Not a amstrong");
	}
	return 0;
}
