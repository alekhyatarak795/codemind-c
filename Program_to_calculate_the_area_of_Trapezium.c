#include<stdio.h>
int main()
{
  int b1,b2,h;
  float a;
  scanf("%d%d%d",&b1,&b2,&h);
  a=(b1+b2)*h*0.5;
  printf("%.4f",a);
}