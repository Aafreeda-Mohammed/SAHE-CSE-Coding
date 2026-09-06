#include<stdio.h>
int main()
{
	int n,i,j,c=1;
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
			if(i>j)
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
		printf("Upper triangular");
	}
	else
	{
		printf("Not Upper triangular");
	}
	return 0;
}
