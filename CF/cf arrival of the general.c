#include<stdio.h>
int main()
{
    int x[101],a[101];
    int n;

    int i,cnt=0,d=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

   for(i=0;i<n;i++)
     {
       a[i]=x[i];
     }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                d=x[i];
                x[i]=x[j];
                x[j]=d;
            }
        }
    }



 int max=0,min=0;

 max=x[n-1];
 min=x[0];
 i=0;
while(a[0]!=max)
{

         d=a[i];
         a[i]=a[i-1];
         a[i-1]=d;
         cnt++;
         i++;
}
 i=0;
while(a[n-1]!=min)
{

         d=a[i];
         a[i]=a[i+1];
         a[i+1]=d;
         cnt++;
         i++;
}


printf("%d",cnt);


    return 0;
}
