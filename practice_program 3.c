#include<stdio.h>
#define max 50
#define cmax 100
int main()
{
	const int a=20;
	const float b=10.25;
	printf("%d\n",a+max);
	printf("%d\n",cmax-a);
	printf("%d\n",a*max*cmax);
	printf("%.2f\n",max+b);
	printf("%.3f\n",b*cmax);
	return 0;
	
}
