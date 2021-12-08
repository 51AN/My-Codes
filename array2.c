#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[100],sum=0,i;
    printf("How many numbers do you want to work with:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("The sum is: %d\n",sum);
    printf("The avg is: %.3f",(float)sum/n);



    getch();
    return 0;
}


