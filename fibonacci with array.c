#include<stdio.h>
#include<conio.h>
int main()
{

    int i=0,x,a[100];

    printf("How many fibonacci numbers:");
    scanf("%d",&x);

    a[0]=0;
    a[1]=1;

    for(i=2;i<=x;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    for(i=1;i<=x;i++)
    {
        printf("\t%d",a[i]);

    }

    getch();
    return 0;
}


