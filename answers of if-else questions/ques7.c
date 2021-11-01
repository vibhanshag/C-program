#include <stdio.h>
void main()
{
    char a;
    printf("enter the character\n");
    scanf("%ch",&a);
    if(a>=97 && a<=122)
    printf("%c is a character between a-z",a);
    else if(a>=65 || a<=90)
    printf("%c is a character between A-Z",a);
    else
    printf("%c is not a character",a);    
}