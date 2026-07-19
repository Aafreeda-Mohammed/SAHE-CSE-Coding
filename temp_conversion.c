#include<stdio.h>
int main()
{
	float c,f,ctof,ftoc;
	printf("Enter the values of c and f");
	scanf("%f %f",&c,&f);
	ctof=(9.0/5.0*c)+32;  // use 9.0 and 5.0 for float division
	ftoc=(f-32)*5.0/9.0;  // use 9.0 and 5.0
	printf("%.1fc=%.1ff\n",c,ctof);
	printf("%.1ff=%.1fc\n",f,ftoc);
	return 0;
}
