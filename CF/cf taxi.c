#include<stdio.h>

int main()
{
    int n,cnt=0,i,j,k,x=0;


    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==4)// for 4
        {
            cnt++;
            a[i]=0;
        }

    }


    for(i=0;i<n;i++)
    {
       lv3: if(a[i]==3)//for 3 and 1 or only 3
        {
               for(j=0;j<n&&j!=i;j++)
               {
                   if(a[j]==1)
                   {
                       cnt++;
                       a[j]=0;
                       a[i]=0;

                       goto lv3;
                   }


               }
               cnt++;
               a[i]=0;
        }
    }


    for(i=0;i<n;i++)
    {
      lv0:  lv1: lv2:    if(a[i]==2)//for 2 and 1 or 2 and 2
            {
               for(j=0;j<n&&j!=i;j++)//for 2 and 2
               {
                   if(a[j]==2)
                   {
                       cnt++;
                       a[j]=0;
                       a[i]=0;
                       goto lv2;
                   }
               }
               for(j=0;j<n;j++)
               {
                   if(a[j]==1)//for 2 and 1 and 1 or 2 and 1;
                  {
                       for(k=0;k<n&&k!=j;k++)
                       {
                         if(a[k]==1)
                           {
                               cnt++;
                               a[k]=0;
                               a[j]=0;
                               a[i]=0;
                               goto lv1;
                           }
                       }
                       cnt++;
                       a[j]=0;
                       a[i]=0;
                       goto lv0;
                   }
               }

               cnt++;
               a[i]=0;
        }
    }


    for(i=0;i<n;i++)
    {
        if(a[i]==1)//for 1 and 1s or only 1
        {
            x++;
            if(x==4)
            {
                cnt++;
                x=0;
            }

            a[i]=0;
        }
     }
     if(x>0)
     {
        cnt++;
     }




printf("%d",cnt);


    return 0;
}
