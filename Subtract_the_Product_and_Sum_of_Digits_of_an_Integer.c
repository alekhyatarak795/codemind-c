#include<stdio.h>
int main()
{
    int n,p=1,s=0,i,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    i=p-s;
    printf("%d",i);
}