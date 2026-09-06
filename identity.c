#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("Enter the order of matrix");
	scanf("%d",&n);
	int a[n][n];
	printf("enter elements of matrix");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	c=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				{
					c=0;
				}
			}
			if(i!=j)
			{
				if(a[i][j]!=0)
				{
					c=0;
				}
			}
		}
	}
	if(c==1)
	{
		printf("Identity Matrix");
	}
	else
	{
		printf("Not an Identity Matrix");
	}
}

