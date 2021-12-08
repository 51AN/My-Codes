#include<stdio.h>

int main()
{

    int n,x=0,i=0;

    scanf("%d",&n);

    char s[5];

    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
        if(s[0]=='+')
        {
            ++x;
        }
        else if(s[0]=='-')
        {
            --x;
        }
        else if(s[0]=='x')
        {
            if(s[2]=='+')
                x++;
            else if(s[2]=='-')
                x--;
        }

    }
    printf("%d",x);


    return 0;
}
