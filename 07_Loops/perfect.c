#include<stdio.h>
int main()
{
  int i=1,n,c=0,b;
  printf("Enter the n value");
  scanf("%d",&n);
  b=n;
  while(i<n)
{
if(n%i==0)
{
c=c+i;
}
i++;
}
if(b==c)
{
printf("Perfect");
}
else
{
printf("Not a perfect number");
}
return 0;
}
