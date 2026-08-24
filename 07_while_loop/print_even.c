#include<stdio.h>
int main()
{
	int i=2,n;
	printf("Enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i+=2;
	}
	return 0;
}
