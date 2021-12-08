#include<stdio.h>


int main()
{
    int n,i,k,j,b=0;
    unsigned long long int a=1;
    printf("Input the power of x : ");
    scanf("%d",&n);
    printf("Now input the k th derivative : ");
    scanf("%d",&k);

    char s[5]="x";

printf("\n%d number derivative: ",k);
    for(i=0;i<k;i++)
    {

        a=a*(n-i);

    }
    for(j=1;j<=k;j++)
    {
        b=n-j;
    }


    printf("%llu*",a);

    printf("%s^",s);

    printf("%d\n",b);





    return 0;
}
