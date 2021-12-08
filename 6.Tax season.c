#include<stdio.h>
int main()
{

    float n;
    printf("Enter taxable income: ");
    scanf("%f",&n);
    if(n<=750)
        printf("%.2f",(n*.01));
    else if(n>750&&n<=2250)
        printf("%.2f",((n-750)*.02)+7.50);
    else if(n>2250&&n<=3750)
        printf("%.2f",((n-2250)*.03)+37.50);
    else if(n>3750&&n<=5250)
        printf("%.2f",((n-3750)*.04)+82.50);
    else if(n>5250&&n<=7000)
        printf("%.2f",((n-5250)*.05)+142.50);
    else if(n>7000)
        printf("%.2f",((n-7000)*.06)+230.00);

    return 0;
}
