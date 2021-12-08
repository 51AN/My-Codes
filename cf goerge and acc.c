#include<stdio.h>
int main()
{
    int n,p,q,cnt=0,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);//Fucking do not put %d\n here. The fucking code doesn't work properly if you do//
        if((q-p)>=2)
        {
            cnt++;
        }
    }


     printf("%d",cnt);



    return 0;
}
