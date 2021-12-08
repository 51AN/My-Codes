#include<stdio.h>
int main()
{

    int i,x,y=0,z=1,f=0;


    printf("Enter how many fibonacci number you want to see:");
    scanf("%d",&x);

    printf("The fibonacci series : ");
    for(i=1;i<=x;i++)
    {
        f=y+z;
        y=z;
        z=f;

        printf("%d, ",f);
    }




    getch();
    return 0;
}
