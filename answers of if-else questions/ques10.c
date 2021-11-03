#include <stdio.h>
void main()
{
    char c;
    printf("enter alphabet\n");
    scanf("%c",&c);
    if (c >= 'a' && c <= 'z')
    printf("lowercase");
    else
    printf("UPPERCASE");   
}