#include <stdio.h>
void main()
{
    float a,b,h,x;
    printf("enter a and b(parellel sides) in cm\n");
    scanf("%f%f",&a,&b);
    printf("enter h (height of trapezium) in cm");
    scanf("%f",&h);
    x=(((a+b)/2)*h);
    printf("%.2fcm-sq.",x);
}