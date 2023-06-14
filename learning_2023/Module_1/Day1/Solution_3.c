#include <stdio.h>

int main() {
  int a,t,p,m,phy,c;
  char n[100];
  scanf("%d",a);
  scanf("[^/n]s",n);
  scanf("%d%d%d",&m,&phy,&c);
  t=phy+m+c;
  p=((t/3)*100);
  printf("%d:%s percentage is %d",a,n,p);
  
  
}