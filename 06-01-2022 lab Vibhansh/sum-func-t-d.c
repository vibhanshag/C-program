// sum iof twi integers with all four types type d
#include <stdio.h>
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
	}
int main()
{
	int x,y,z;
	printf("enter value of x and y \n");
	scanf("%d%d",&x,&y);
	z=sum(x,y);
	printf("%d",z);
	return 0;
}
