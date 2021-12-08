#include<stdio.h>'

int main()
{
    int x,y=0,temp;//here y=0 i
    printf("Enter an integer number:");
    scanf("%d",&x);
    temp=x;
    while(temp!=0)
{
    temp=temp/10;
    ++y;

}
    printf("The number of digits in %d is %d",x,y);

    getch();
    return 0;
}
