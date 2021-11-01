#include<stdio.h>
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if (a%5==0 && a%11==0)
    printf("the number is divisible by both 5 and 11");
    else if
    (a%5==0 && a%11!=0)
    printf("the number is divisible by 5 only");
    else if(a%5!=0 && a%11==0)
    printf("the number is divisible by 11 only");
    else if (a%5!=0 && a%11!=0)
    printf("the number is not divisible by 5 or 11");
    return 0;
}