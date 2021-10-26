#include<stdio.h>

int main()
{
    float x,y,z;
    printf("Enter 3 sides of triangle");
    scanf("%f%f%f",&x,&y,&z);
    if (x==y && y==z && x==z)
    {
    printf("Equilateral triangle");
    }
    if (x==y && x!=z)
    {
    printf("Isosceles triangle");
    }
    if(x!=y && x!=z && y!=z)
    {
    printf("Scalen triangle");
    }
    return 0;
}