#include<stdio.h>
#include<math.h>

int main()
{

    int i,n,sum=0,temp=0;

    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=0;
    for(i=1;i<=n;i++)
    {
       if(a[i]==-1)
       {
          if(temp>0)
          {
              sum=sum+a[i]+1;
              temp--;
          }
          else
          {
              sum=sum+a[i];
          }
       }
       else if(a[i]>0)
       {
           temp=temp+a[i];
       }

    }


    if(sum<0)
    {
        sum=abs(sum);
        printf("%d",sum);
    }
    else
        printf("0");




    return 0;
}
