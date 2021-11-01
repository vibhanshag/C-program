#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is maximum",a);
    else if(b>a && b>c)
    printf("%d is maximum",b);
    else if(c>a && c>b)
    printf("%d is maximum",c);
    else
    printf("values are equal");   
    return 0;    
}