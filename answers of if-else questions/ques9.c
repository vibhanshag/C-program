#include <stdio.h>
void main()
{
    char c;
    printf("enter chracter\n");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("it is an alphabet");
    else if(c >= '0' && c <= '9')
    printf("it is a number");
    else 
    printf("it is a special character");
}