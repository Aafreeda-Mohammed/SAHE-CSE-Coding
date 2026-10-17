#include<stdio.h>
int main()
{
	int a[10],pos,value,i,n;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter array elememts : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position : ");
	scanf("%d",&pos);
	printf("Enter the value that is to be inserted : ");
	scanf("%d",&value);
	for(i=n-1;i>pos-1;i--);
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	printf("The final array elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
