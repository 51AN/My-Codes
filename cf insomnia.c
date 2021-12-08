#include<stdio.h>

int main(void)
{

    int k,n,l,d,m,i=0,a[100001]={0};

    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);

   while(k<=d&&l<=d&&m<=d&&n<=d)
    {
        a[k]=a[k]+1;
        k=k+k;

        a[l]=a[l]+1;
        l=l+l;

        a[m]=a[m]+1;
        m=m+m;

        a[n]=a[n]+1;
        n=n+n;
    }
    int cnt=0;

   for(i=1;i<=d;i++)
   {
       if(a[i]!=0)
       {
           cnt++;
       }
   }
   printf("%d\n",cnt);
   for(i=1;i<=d;i++)
   {
       printf("%d ",a[i]);
   }


    return 0;
}
