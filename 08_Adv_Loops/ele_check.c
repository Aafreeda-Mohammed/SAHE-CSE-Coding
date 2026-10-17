#include<stdio.h>
int main()
{
	int a[5],i,n,ele,f=1;
	printf("Enter the n value : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
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
			f=0;
			break;
		}
		
	}
	if(f==0)
	{
		printf("Element found");
	}
	else
	{
		printf("Element not found");
	}
	return 0;
}
