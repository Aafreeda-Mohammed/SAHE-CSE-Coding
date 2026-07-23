#include<stdio.h>
int main()
{
	int a=10,b=15,c=20;
	printf("%d\n",(a<b)&&(c>a));
	printf("%d\n",(a>b)||(c<b));
	printf("%d\n",!(b<c));
	return 0;
	
}
