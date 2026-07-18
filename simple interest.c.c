#include<stdio.h>
#include<conio.h>
int main()
{
	float p,r,t;
	printf("enter p,r,t values");
	scanf("%f%f%f",&p,&r,&t);
	printf("simple interest=%.2f",(p*t*r)/100);
	return 0;
}

