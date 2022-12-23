#include<stdio.h>
int main()
{
    int n,t,c=1,s;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n!=0)
    {
      c=c*10;
      n=n/10;
     }
     if(s%c==t)
     {
       printf("Automorphic Number");
     }
     else
     {
       printf("Not an Automorphic Number");
     }
 }