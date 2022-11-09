#include<stdio.h>
int main()
{
    int t,n,i,j=0,x=0,y=0,cnt=0,m;
    int a[7];

    scanf("%d",&t);


    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        m=n;
    while(m!=0)
    {
        m=m/10;
        x++;
    }


        for(j=0;j<x;j++)
        {
            y=n%10;
            if(y!=0)
            {
                a[j]=y;
                cnt++;
            }
            n=n/10;

        }
        printf("%d\n",cnt);
        for(j=0;j<x;j++)
        {
            printf("%d ",a[j]);
        }








    }



    return 0;
}
