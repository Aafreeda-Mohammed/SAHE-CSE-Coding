#include<stdio.h>
int main()
{
	int r=2,n,i=1,c=0;
	printf("enter n value");
	scanf("%d",&n);
	z:if(r<=n)
	{
		c=0;
		i=1;
		while(i<=r)
		{
		if(r%i==0)
		{
			c=c+1;
		}
		i++;
    	}
		if(c==2)
		{
			printf("%d\n",r);
		}
		r++;
		goto z;
       	}
       	printf("\n");
    return 0;
}

