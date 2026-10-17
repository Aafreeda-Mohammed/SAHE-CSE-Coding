#include<stdio.h>
int main()
{
	int a[5],i,n,min,max;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i-0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Max = %d\nMin = %d",max,min);
	return 0;
}
