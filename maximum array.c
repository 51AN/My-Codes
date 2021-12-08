#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],x,i,max=0;
    printf("How many numbers do you want to input:");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1;i<x;i++)
    {
        if(max<a[i])
            max=a[i];
    }

printf("The maximum number is :%d",max);



    getch();
    return 0;
}


