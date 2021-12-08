#include<stdio.h>
int main()
{
    int x,y=1,n;
    printf("Enter any natural number:");
    scanf("%d",&n);

    for (x=1; x<=n; x++)
    {
        y *= x;

    }

    printf("The factorial of %d is %d",n,y);

    getch();
    return 0;
}
