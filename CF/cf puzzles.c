#include<stdio.h>

int main()
{
    int n,m,i,j,x=0,ans=0;
    int f[1001];
    scanf("%d%d",&n,&m);


    for(i=0;i<m;i++)
    {
        scanf("%d",&f[i]);
    }

    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(f[i]>f[j])
            {
                x=f[i];
                f[i]=f[j];
                f[j]=x;
            }
        }
    }

    ans=f[n-1]-f[0];
    for(i=0;i<=m-n;i++){
        if(f[i+n-1]-f[i]<ans)
            ans=f[i+n-1]-f[i];
    }
    printf("%d\n",ans);

    return 0;
}
