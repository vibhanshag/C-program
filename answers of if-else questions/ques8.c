#include <stdio.h>
void main()
{
  char a;
  printf("enter the alphabet\n");
  scanf("%c",&a);
  if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' )
  printf("character is vowel");
  else 
  printf("character is consonent");     
}