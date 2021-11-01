#include <stdio.h>
void main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a>0)
    printf("number is positive");
    else if(a<0)
    printf("number is negative");
    else if(a==0)
    printf("number is zero");     
}