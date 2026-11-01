#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,carry=1;
	printf("Enter the no.of bits : ");
	scanf("%d",&n);
	char bi[n],o[n],t[n];          // bi=entered binary num,o=one's compliment,t=two's compliment
	printf("Enter the binary number : ");
	scanf("%s",bi);
	for(i=0;i<n;i++)
	{
		if(bi[i]=='0')
		{
			o[i]='1';
		}
		else if(bi[i]=='1')
		{
			o[i]='0';
		}
	}
	o[n]='\0';
	printf("One's compliment : %s\n",o);
	for(i=n-1;i>=0;i--)
	{
		if(o[i]=='1'&&carry==1)
		{
			t[i]='0';
		}
		else if(o[i]=='0'&&carry==1)
		{
			t[i]='1';
			carry=0;
		}
		else
		{
			t[i]=o[i];
		}
	}
	t[n]='\0';
	printf("Two's compliment : %s\n",t);
	return 0;
}
