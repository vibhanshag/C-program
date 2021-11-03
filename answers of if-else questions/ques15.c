#include <stdio.h>
void main()
{
    float a,b,c;
    printf("enter 3 side of the traingle a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
    printf("triangle is valid");
    else
    printf("not a valid triangle");       
}