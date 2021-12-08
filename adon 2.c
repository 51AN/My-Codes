#include<stdio.h>
int main()
{
    int n,i;
    printf("How many numbers do you want to see?\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
       for(i=0;i<n;i++)
       {

        if(arr[i]<0)
        {
            printf("%d is a negative number.\n",n);

        }
        else if(arr[i]==0)
        {
            printf("%d is a Zero, just like you.Go fuck your life\n",n);

        }
        else if(arr[i]>0)
        {
            printf("%d is a positive number.\n",n);
        }

        }





    return 0;
}
