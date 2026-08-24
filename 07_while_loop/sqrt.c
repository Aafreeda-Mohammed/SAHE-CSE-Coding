#include<stdio.h>
int main()
{
	int n,x=0,c=0,i=1;
	printf("enter n values");
	scanf("%d",&n);
	while(x<n)
	{
		x=x+i;
		c++;
		i+=2;
	}
	printf("sqrt=%d",c);
}
