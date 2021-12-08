#include<stdio.h>

int main()
{

    int i,n,x=0;

    char s[101];
    scanf("%d",&n);
    scanf("%s",&s);


    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
        }
    }


printf("%d",x);

    return 0;
}
