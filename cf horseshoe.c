#include<stdio.h>
int main()
{

    long long int i,a[5],cnt=0,j,x=0;
    for(i=0;i<4;i++){
        scanf("%lld",&a[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
               x=a[i];
               a[i]=a[j];
               a[j]=x;
            }
        }
    }
    for(i=0;i<3;i++)
    {

        if(a[i]==a[i+1])
        {
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}
