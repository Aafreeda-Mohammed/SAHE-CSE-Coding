#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+i;
	i++;	
	}
	printf("%d",sum);
}

