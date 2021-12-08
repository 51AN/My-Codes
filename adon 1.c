#include<stdio.h>

int main()
{

    int n,i;
    printf("Enter 10 numbers:\n");

    for(i=1;i<=10;i++)
    {

        scanf("%d",&n);


        if(n<0)
        {
            printf("%d is a negative number.\n",n);

        }
        else if(n==0)
        {
            printf("%d is a Zero, just like you.Go fuck your life\n",n);

        }
        else if(n>0)
        {
            printf("%d is a positive number.\n",n);
        }
    }



    return 0;
}
