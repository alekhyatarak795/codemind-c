#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float s;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%0.2f",s);
}