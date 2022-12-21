#include<stdio.h>
int main()
{
    int x,b;
    scanf("%d",&x);
    b=x%3;
    if(b==0)
    {
        printf("NORMAL");
    }
    else if(b==2)
    {
        printf("SMALL");
    }
    else
    {
        printf("HUGE");
    }
}