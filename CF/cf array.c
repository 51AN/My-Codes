#include<stdio.h>
int main()
{

    int n,j=0,k=0;
    scanf("%d",&n);
    int a[101],p[101]={0},m[101]={0},z[2]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
          p[j]=a[i];
          j++;
        }
        else if(a[i]<0)
        {
            m[k]=a[i];
            k++;
        }
        else
        {
            z[0]=a[i];

        }
    }
        for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
        for(int i=0;i<n;i++)
    {
        scanf("%d ",m[i]);
    }
      for(int i=0;i<n;i++)
    {
        scanf("%d ",z[i]);
    }
    int cntm=0;
    int l=0;
    while(m[l]!=0)
    {
        cntm++;
    }
    int cntp=0;
    l=0;
    while(p[l]!=0)
    {
        cntp++;
    }

    if(cntm%2==0)
    {
        z[1]=m[k];
        printf("%d ",cntm);
        for(int i=0;i<cntm-1;i++)
        {
        printf("%d",m[i]);
        }
        printf("\n");
        for(int i=0;i<cntp;i++)
        {
        printf("%d",p[i]);
        }
        printf("\n");
        printf("2 ");
        printf("%d %d\n",z[0],z[1]);

    }
    else
    {
     for(int i=0;i<cntm;i++)
        {
        printf("%d",m[i]);
        }
        printf("\n");
        for(int i=0;i<cntp;i++)
        {
        printf("%d",p[i]);
        }
        printf("\n");
        printf("1 ");
        printf("%d\n",z[0]);


    }


    return 0;
}
