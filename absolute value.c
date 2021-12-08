#include<stdio.h>
#include<math.h>
int main()
{

    int x,y;
    printf("Enter an integer number:");
    scanf("%d",&y);
    x=abs(y);//abs is the operator to turn any number to its absolute value//
    printf("The absolute value of the number is:%d",x);



    getch();
    return 0;
}
