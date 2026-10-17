#include<stdio.h>
int main()
{
	int a[10],high,mid,low,key,f=1,n,i;
	printf("Enter the n value : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key element : ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(key==a[mid])
		{
			f=0;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
			mid=(high+low)/2;
		}
		else if(key>a[mid])
		{
			low=mid+1;
			mid=(low+high)/2;
		}
	}
	if((f==0))
	{
		printf("The element found");
	}
	else
	{
		printf("The element not found");
	}
	return 0;
}
