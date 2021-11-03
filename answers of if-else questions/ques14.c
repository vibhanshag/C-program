#include <stdio.h>
void main()
{
    float a,b,c;
    printf("enter angles of triagnle a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b+c)==180)
    printf("valid triangle");
    else
    printf("not a valid triangle");   
}