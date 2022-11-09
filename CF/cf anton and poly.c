#include<stdio.h>

int main()
{
    int n,i,cnt=0;
    char si[20];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",si);
    if(si[0]=='T')
           cnt+=4;
        else if(si[0]=='C')
            cnt+=6;
        else if(si[0]=='O')
            cnt+=8;
        else if(si[0]=='D')
            cnt+=12;
        else if(si[0]=='I')
            cnt+=20;
    }

printf("%d",cnt);

    return 0;
}
