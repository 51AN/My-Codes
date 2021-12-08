#include<stdio.h>
int main()
{
    int temp,rem,fact,n,i,sum=0;
    printf("Enter an integer number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;        //change
        for(i=1;i<=rem;i++)
           {
               fact=fact*i;
           }
        sum=sum+fact;

        temp=temp/10;
    }
if(sum==n)
    printf("%d is a strong number",n);
else
    printf("%d is not a strong number",n);
    return 0;
}
