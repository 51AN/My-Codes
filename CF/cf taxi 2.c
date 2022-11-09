#include<stdio.h>
int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,cnt=0,i;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==4)
        {
            c4++;
            a[i]=0;
        }
        if(a[i]==3)
        {
            c3++;
            a[i]=0;
        }
        if(a[i]==2)
        {
            c2++;
            a[i]=0;
        }
        if(a[i]==1)
        {
            c1++;
            a[i]=0;
        }

    }
    cnt=c4;
    c4=0;

    while(c3!=0&&c1!=0)
    {
        c3--;
        c1--;
        cnt++;
    }


    if(c3!=0&&c1==0)
    {
        cnt=cnt+c3;
        c3=0;
    }

    cnt=cnt+c2/2;
    c2=c2%2;

    if(c2!=0&&c1==0)
    {
        cnt++;
        c2=0;
    }

    if(c2!=0&&c1==1)
    {
        cnt++;
        c2=0;
        c1=0;

    }

    if(c2!=0&&c1>=2)
    {
        cnt++;
        c2=0;
        c1=c1-2;
    }

    while(c1!=0&&c1>=4)
    {
        cnt++;
        c1=c1-4;
    }

    if(c1!=0)
    {
        cnt++;
        c1=0;
    }

    printf("%d",cnt);


    return 0;
}
