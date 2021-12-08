#include<stdio.h>
int main()
{
    double n,x=0,j=0,m=0;
    char c;
    printf("Choose an operator: +,-,*,/\n");

    scanf("%c",&c);

    if(c=='+')
    {
        a:
        printf("Enter a number to add:\n");
        scanf("%lf",&n);
        x=n;
        m=j+x;
        j=m;

        printf("\n%.3lf is the summation.",m);
        goto a;
    }
    else if(c=='-')
    {
        b:
        printf("Enter a number to subtract:\n");
        scanf("%lf",&n);
        x=n;
        m=j-x;
        j=m;

        printf("\n%.3lf is the subtraction.",m);
        goto b;
    }
    else if(c=='*')
    {
        j=1;
        c:
        printf("Enter a number to multiply:\n");
        scanf("%lf",&n);
        x=n;
        m=j*x;
        j=m;

        printf("\n%.3lf is the multiplication.",m);
        goto c;
    }
    else if(c=='/')
    {
        j=1;
        d:
        printf("Enter a number to divide:\n");
        scanf("%lf",&n);
        x=n;
        m=j/x;
        j=m;

        printf("\n%lf is the devidation.",m);
        goto d;
    }




    return 0;
}
