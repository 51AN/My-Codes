//(1+3+5+.....)-(2+4+6+.....)//
#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;

    printf("Enter the last digit(even) of the series 1-2+3-4+.....:");
    scanf("%d",&n);
    if(n%2!=0){
         printf("The number you have entered is not an even number.");
    }
    else{
    for (i=1;i<=n;i++)
    {
        if(i%2==0){
            even=even+i;

        }
        else{
            odd=odd+i;

        }
    }

    printf("The summation of the series is:%d",odd-even);
    }
    getch();
    return 0;
}
