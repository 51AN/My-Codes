#include<stdio.h>
#include<conio.h>
int main()
{

    int a[]={ 10,20,30,40,50},sum=0,i;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];

    }

     printf("The sum is: %d",sum);

    getch();
    return 0;
}

