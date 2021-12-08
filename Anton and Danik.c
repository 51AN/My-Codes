#include<stdio.h>

int main()
{
    int n,i,cnta=0,cntd=0;

    char s[100001];

    scanf("%d",&n);
    scanf("%s",&s);

    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnta++;
        }
        else
        {
            cntd++;
        }
    }
    if(cnta<cntd)
    {
        printf("Danik");
    }
    else if(cnta>cntd)
    {
        printf("Anton");
    }
    else
        printf("Friendship");


    return 0;
}
