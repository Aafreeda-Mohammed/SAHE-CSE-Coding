#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	printf("Enter the  first string : ");
	scanf(" %[^\n]",a);
	printf("Enter the second string : ");
	scanf(" %[^\n]",b);
	strcat(a,b);
	printf("The combined string is %s",a);
	return 0;
}
