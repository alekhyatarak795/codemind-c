#include<stdio.h>
int main()
{
    int n,i,m,e;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        e=i%2;
        if(e==0)
        {
            printf("%d ",i);
        }
    }
}