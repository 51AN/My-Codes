#include<stdio.h>

int main()
{
     int i,n;
     unsigned long long y=1;
     printf("Enter any natural number:");
     scanf("%d",&n);

     for(i=1; i<=n; i++)
     {
         y=i*y;
     }
     printf("The the factorial of %d is %llu",n,y);

     getch();
     return 0;
}

