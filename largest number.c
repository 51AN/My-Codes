#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter two integer numbers:");
    scanf("%d %d",&x,&y);

    if (x>y)
    {
        printf("%d is the largest number",x);

    }


     else if (x<y)
    {
        printf("%d is the largest number",y);

    }
     else
    {
        printf("Both numbers are equal");

    }


    getch();
    return 0;

}
