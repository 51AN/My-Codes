#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],x,i,min=0;
    printf("How many numbers do you want to input:");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(i=1;i<x;i++)
    {
        if(min>a[i])
            min=a[i];
    }

printf("The minimum number is :%d",min);



    getch();
    return 0;
}



