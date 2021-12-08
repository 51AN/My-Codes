#include<stdio.h>
int main()
{

    int  s,n,i,j,a=0;
    scanf("%d %d",&s,&n);
    int x[n],y[n];

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
                a=0;
                a=y[i];
                y[i]=y[j];
                y[j]=a;


            }
        }
    }

    if(s<x[0])
    {
        printf("NO");
        return 0;
    }


    for(i=0;i<n;i++)
    {
      if(s>=x[i])
      {
          s=s+y[i];
          s=s-x[i];
      }
      else
      {
          printf("NO");
          return 0;
      }
    }
    printf("YES");



    return 0;
}
