#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  printf("enter the character");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("the character is vowel");
  
}

else
{
  printf("the character is consonant");
}
getch();
}
