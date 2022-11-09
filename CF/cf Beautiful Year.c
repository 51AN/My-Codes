//do this in brute force method.
#include<stdio.h>

int main()
{

    int i,y,cnt=0;
    char s[7];
    char freq[11]={0};
    scanf("%s",&s);

    for(i=0;i<strlen(s);i++)
        {
            x=s[i];
            freq[x]=freq[x]+1;
        }
    for(i=0;i<10;i++)
    {
        if(freq[i]>1)

        {
            cnt++;
        }
        if(cnt==0)
        {
            break;
        }
    }





    return 0;
}
