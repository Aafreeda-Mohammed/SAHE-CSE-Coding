#include<stdio.h>
#include<string.h>
int main()
{
	char string[1000];
	int l;
	printf("Enter the string : ");
	scanf("%[^\n]",string);
	l=strlen(string);
	printf("%d",l);
	return 0;
}
