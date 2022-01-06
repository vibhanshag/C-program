//tabler using fuctions
#include <stdio.h>
void tab()
{
	int a,i,z;
	printf("enter the value to get table of ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
		{
			z=a*i;
			printf("%d X %d = %d\n",a,i,z);
		}
}
int main()
{
	tab();
	return 0;
}
