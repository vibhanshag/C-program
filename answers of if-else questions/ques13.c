#include <stdio.h>
void main()
{
    int a,n;
    printf("enter value more than 500\n");
    scanf("%d",&a);
    n=a/500;
    if (n>=1)
    printf("total notes of 500 required is %d",n);
    else
    printf("enter amount above 500");

}