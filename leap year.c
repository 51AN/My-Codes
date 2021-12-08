#include<stdio.h>
int main()
{


    int x;
    printf("Enter a year:");
    scanf("%d",&x);

    if(x%400==0)
{
    printf("Leap year");
}
    else if(x%4==0&&x%100!=0)
    {
        printf("Leap year");
    }
    else
        printf("Not leap year");


    getch();
    return 0;



}
