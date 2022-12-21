#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=34&&b>=34&&c>=34&&d>=34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}