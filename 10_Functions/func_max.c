#include<stdio.h>
void max(int,int,int);
void main()
{
	int x,y,z;
	printf("Enter the values : ");
	scanf("%d %d %d",&x,&y,&z);
	max(x,y,z);
	getch();
}
void max(int a,int b,int c)
{
	int max;
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("The greatest of all the gievn inputs is %d",max);
}
