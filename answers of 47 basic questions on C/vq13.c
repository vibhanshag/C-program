#include <stdio.h>
void main()
{
    float r,x;
    printf("enter radius of sphere in cm\n");
    scanf("%f",&r);
    x=(4/3)*(3.14)*(r*r*r);
    printf("volume of sphere is- %f",x);
}