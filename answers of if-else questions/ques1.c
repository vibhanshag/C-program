#include <stdio.h>
void main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a is maximum");
    else if(b>a)
    printf("b is maximum");
    else if(a==b)
    printf("a and b are equal");
}