#include<stdio.h>
#include<string.h>
int main()
{
	char str1[1000];
	printf("Enter the string : ");
	scanf("%[^\n]",str1);
	strrev(str1);
	printf("The reversed string is : %s",str1);
	return 0;
}
