#include<stdio.h>
int main()
{
  int i=1,n,c=0;
  printf("Enter the n value");
  scanf("%d",&n);
while(i<=n)
{
  if(n%i==0)
  {
    c=c+1;
  }
  i++;
}
if(c==2)
{
  printf("Prime number");
}
else
{
  printf("Not a prime");
}
return 0;
}
