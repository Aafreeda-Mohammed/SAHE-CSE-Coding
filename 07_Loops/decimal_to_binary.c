#include<stdio.h>
int main()
{
	int r,bi=0,n,d=1;
	printf("Enter the n value : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		bi=bi+r*d;
		n=n/2;
		d=d*10;
	}
	printf("Binary = %d\n",bi);
	return 0;
}
