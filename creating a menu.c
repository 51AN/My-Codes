#include<stdio.h>
int main()
{
    int x;
    float u,b;

    printf("1.USD to BDT\n2.BDT to USD\nEnter your choice:");

    scanf("%d",&x);

    switch(x)
    {


case 1:
    {
        printf("Enter USD amount:");
        scanf("%f",&u);
        b=u*84.64;
        printf("The amount is %.2f BDT",b);
        break;

    }
case 2:
    {
        printf("Enter the BDT amount:");
        scanf("%f",&b);
        u=b*0.011815;
        printf("The amount is %.2f USD",u);
        break;
    }
default :
    printf("Not a valid amount.");
    }
    getch();
    return 0;
}
