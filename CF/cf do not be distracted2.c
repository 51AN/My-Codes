#include<stdio.h>
int main()
{
    int t,n,i,j,x;
    int y=1;
    scanf("%d",&t);
    while(t--)
    {
        int e=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        for(i=0;i<n;i++)
        {
            if(s[i]!=s[i+1])
            {
                for(j=i+1;j<n;j++)
                {
                    if(s[i]==s[j])
                    {
                        printf("NO\n");
                        e++;
                        break;

                    }
                }
            }
            if(e)break;
        }
        if(e==0)printf("YES\n");

    }

return 0;
}
