#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	printf("Enter the string in lower case letters : ");
	scanf(" %[^\n]",a);
	printf("Enter the string in upper case letters : ");
	scanf(" %[^\n]",b);
	strlwr(b);
	strupr(a);
	printf("The new strings are %s %s",a,b);
	return 0;
}
