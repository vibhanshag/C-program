//program for armstrong number
#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter the number\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    z=x%10;
    x=x/10;
    a=(y*100)+(z*10)+x;
    printf("the reverse number is %d",a);
    return 0;

}