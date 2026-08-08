#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b values");
	scanf("%d %d",&a,&b);
	printf("sum=%d\n",a+b);arithematic_operators.c
	printf("diff=%d\n",a-b);
	printf("product=%d\n",a*b);
	if(b !=0) {
	printf("quotient=%d\n",a/b);
	printf("modulus=%d\n",a%b);
} else {
	printf("Error:Cannot divide by 0/n");
}
	return 0;
}
