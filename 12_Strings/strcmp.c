#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	int p;
	printf("Enter the first string : ");
	scanf(" %[^\n]",a);
	printf("Enter the second string : ");
	scanf(" %[^\n]",b);
	p=strcmp(b,a);
	if(p==0)
	{
		printf("Both the strings you entered are equal");
	}
	else
	{
		printf("Both the strings you entered are not equal");
	}
	return 0;
}
