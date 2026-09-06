#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter n value : ");
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
			if(a[i][j]!=a[j][i])
			{
				c=0;
			}
		}
	}
	if(c==0)
	{
		printf("Not Symmetric");
	}
	else if(c!=0)
	{
		printf("Symmetric");
	}
	return 0;
}
