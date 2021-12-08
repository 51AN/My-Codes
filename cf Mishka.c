#include<stdio.h>
int main()

{
    int n,i,m,c,mcount=0,ccount=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);

        if(m>c)
        {
            mcount++;
        }
        else if(c>m)
        {
           ccount++;
        }

    }
    if(mcount>ccount)
    {
        printf("Mishka");
        return 0;
    }
    else if(mcount<ccount)
    {
        printf("Chris");
        return 0;
    }
    else if(mcount==ccount)
    {
        printf("Friendship is magic!^^");
    }



    return 0;
}
