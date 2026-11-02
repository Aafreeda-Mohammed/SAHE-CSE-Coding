#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	printf("Enter the first string : ");
	scanf(" %[^\n]",a);
	strcpy(b,a);
	strrev(a);
	int p;
	p=strcmp(a,b);
	if(p==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
