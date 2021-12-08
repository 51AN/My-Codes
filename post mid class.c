#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]==3)
        {
            if(a[i+1]==2)
            {
                if(a[i+2]==1)
                    goto a;
            }
        }
    }
    printf("Halaluaiha\n");

}
