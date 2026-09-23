#include<stdio.h>
int main()
{
int b,n,r,rev=0;
printf("Enter the n value : ");
scanf("%d",&n);
b=n;
while(n>0)
{
  r=n%10;
  rev=(rev*10)+r;
  n=n/10;
}
if(b==rev)
{
  printf("Palindrome");
}
else
{
  printf("Not a palindrome");
}
return 0;
}
