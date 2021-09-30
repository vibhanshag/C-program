#include <stdio.h>
int main()
{
int a,b;
printf("enter 1st number");
scanf("%d",&a);
printf("enter 2nd number");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d",a);
printf("\n%d",b);
return 0;
}
