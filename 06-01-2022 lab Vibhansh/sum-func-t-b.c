//sum of two numbers using functions(all four types) type b
#include <stdio.h>
int sum()
{
	int x,y,z;
	printf("enter value of x and y");
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}
int main()
{	
	int a;
	a=sum();
	printf("%d",a);
}
