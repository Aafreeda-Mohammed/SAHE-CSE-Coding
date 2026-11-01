#include<stdio.h>
int main()
{
	int ele,a[5],i,n,f=0;
	printf("Enter n value :");
	scanf("%d",&n);
	printf("Enter array elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element : ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			f=1;
			break;
		}
		else
		{
			f=0;
		}
	}
	if(f==1)
	{
		printf("Element found\n");
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}