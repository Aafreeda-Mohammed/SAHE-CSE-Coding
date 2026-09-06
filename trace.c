#include<stdio.h>
int main()
{
	int n,i,j,sum=0,s=0;
	printf("Enter the value of n : \n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the elements of the matrix : \n");
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
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("The Sum of the Diagonal Elements is :%d \n",sum);
	return 0;
}
