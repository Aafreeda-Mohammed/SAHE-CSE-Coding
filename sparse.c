#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter the n value : ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the elements of the matrix : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				c=c+1;
			}
		}
	}
	if(c>n*n/2)
	{
		printf("Sparse");
	}
	else
	{
		printf("Not Sparse");
	}
	return 0;
}
