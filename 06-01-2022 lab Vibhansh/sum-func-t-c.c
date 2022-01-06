//sum of two numbers using functions(all four types) type c
#include <stdio.h>
void sum(int a,int b)
{
	int z;
	z=a+b;
	printf("%d",z);
}
int main()
{
	int x,y;
	printf("enter value of x and y");
	scanf("%d%d",&x,&y);
	sum(x,y);
	return 0;
}
