#include<stdio.h>
int main(void)
{
    int a=0,b=0,c=0,i,j,x=0;
    int f[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&f[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(f[i]>f[j])
            {
                x=f[i];
                f[i]=f[j];
                f[j]=x;
            }
        }
    }

    a=f[3]-f[0];
    b=f[3]-f[1];
    c=f[3]-f[2];

    printf("%d %d %d",a,b,c);


    return 0;
}
