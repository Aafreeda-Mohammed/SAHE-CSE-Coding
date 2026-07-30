#include<stdio.h>
int main()
{
	const int a=9,b=10;
	char ch1='a',ch2='A';
	printf("%d\n",ch1+ch2*a*b);
	printf("%d\n",ch1*b);
	printf("%d\n",a*ch1+b);
	printf("%d\n",ch1*ch2*b);
	return 0;
}

