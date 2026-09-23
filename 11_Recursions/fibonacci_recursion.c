#include<stdio.h>
int fibonocci(int);
int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	printf("%d\t%d\t",0,1);
	fibonocci(n);
	return 0;
}
int fibonocci(int n)
{
	static int f0=0,f1=1,f2;
	if(n>0)
	{
		f2=f0+f1;
		printf("%d\t",f2);
		f0=f1;
		f1=f2;
		fibonocci(n-1);
	}
	return fibonocci;
}
