#include<stdio.h>
int main()
{
    int a[3];
    int i,j,x=0,cnt=0;

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
               x=a[i];
               a[i]=a[j];
               a[j]=x;
            }
        }
    }
    cnt=(a[2]-a[1])+(a[1]-a[0]);
    printf("%d",cnt);
    return 0;
}
