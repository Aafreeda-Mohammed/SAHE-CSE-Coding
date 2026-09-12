#include<stdio.h>
float average(int,int,int);
int main()
{
	float avg;
	avg=average(90,75,80);
	printf("%.2f",avg);
}
float average(int m1,int m2,int m3)
{
	return (m1+m2+m3)/3.0;
}

