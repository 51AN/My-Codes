#include<stdio.h>

int main()
{
     int i,sum=0,n;
     printf("Enter any natural number:");
     scanf("%d",&n);

     for(i=1; i<=n; i++)
     {
         sum=i+sum;
     }
     printf("The summation from 1 to %d is %d",n,sum);

     getch();
     return 0;
}
