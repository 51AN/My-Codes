#include<stdio.h>
#include<math.h>
int main()
{

    int x,y,ans;

    printf("Enter an integer number:");

    scanf("%d",&x);

    printf("\nEnter the power:");

    scanf("%d",&y);

    ans=pow(x,y);

    printf("\nThe answer is:%d",ans);



    getch();
    return 0;

}
