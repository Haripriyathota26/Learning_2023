#include <stdio.h>

int main() {
  int a,b;
  char c;
  printf("Enter Number1:\n");
  scanf("%d",&a);
  printf("Enter the operator:\n");
  scanf("%c",c);
  printf("Enter Number2:\n");
  scanf("%d",&b);
  if(c=='+')
  {
      printf("%d",a+b);
  }
  else if(c=='-')
  {
      printf("%d",a-b);
  }
  else if(c=='*')
  {
      printf("%d",a*b);
  }
  else if(c=='/')
  {
      printf("%d",a/b);
  }
  else if(c=='%')
  {
      printf("%d",a%b);
  }
  else
  {
      printf("Invalid operator");
  }
  
    return 0;
}