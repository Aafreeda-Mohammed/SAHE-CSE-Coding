#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	printf("Enter the string : ");
	scanf("%[^\n]",a);
	strcpy(b,a);
	printf("The copied string is %s",b);
	return 0;
}
