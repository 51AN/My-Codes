#include<stdio.h>
int main()
{

    int n,i,j,x=0,y=0,k=1,sumx=0,sumy=0,sumz=0;
    int a[201];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=3;j++)
        {

            scanf("%d",&a[k]);
            k++;

        }
    }

for(i=1;i<=n*3-2;i=i+3)
{
    sumx=sumx+a[i];
}
for(i=2;i<=n*3-1;i=i+3)
{
    sumy=sumy+a[i];
}
for(i=3;i<=n*3;i=i+3)
{
    sumz=sumz+a[i];
}



    if(sumx==0&&sumy==0&&sumz==0)
        printf("YES");
    else
        printf("NO");


    return 0;
}
//will work but too big of a code, use while loop instead

