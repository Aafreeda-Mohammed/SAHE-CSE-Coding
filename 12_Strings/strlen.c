#include<stdio.h>
#include<string.h>
int main()
{
	char string[5];
	int l;
	printf("Enter the string : ");
	scanf("%s",string);
	l=strlen(string);
	printf("%d",l);
	return 0;
}
