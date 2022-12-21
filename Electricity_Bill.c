#include<stdio.h>
int main()
{
    float u,c,b,s,tb;
    scanf("%f",&u);
    if(u<=199)
    {
        c=1.20;
        printf("Units Consumed: %.f
",u);
        printf("Cost per Unit: %.2f
",c);
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        printf("Units Consumed: %.f
",u);
        printf("Cost per Unit: %.2f
",c);
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        printf("Units Consumed: %.f
",u);
        printf("Cost per Unit: %.2f
",c);
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
        printf("Units Consumed: %.f
",u);
        printf("Cost per Unit: %.2f
",c);
    }
    else
    {
        c=2.00;
        printf("Units Consumed: %.f
",u);
        printf("Cost per Unit: %.2f
",c);
    }
    b=u*c;
    printf("Bill: %.2f
",b);
    if(b>400)
    {
        s=b*0.15;
        tb=b+b*0.15;
        printf("Surcharge: %.2f
",s);
    }
    else
    {
        tb=b+b*0.00;
        printf("Surcharge: %.2f
",s);
    }
    printf("Total Amount: %.2f
",tb);
}