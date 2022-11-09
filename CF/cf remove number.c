#include<stdio.h>
#include<math.h>
int main()
{

    int t,n,i,j;
    int a[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i]);
        }

        for(j=0;j<n;j++)
        {
            if(abs(a[j]-a[j+1])>1){
                printf("NO\n");
            }

        }
        printf("YES\n");






    }




    return 0;
}
