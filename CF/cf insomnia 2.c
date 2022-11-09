#include<stdio.h>
int main(void)
{

    int k,n,l,d,m,i=0;
    int cnt=0;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    for(i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            cnt++;
    }


   printf("%d\n",cnt);


    return 0;
}
