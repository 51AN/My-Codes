#include<stdio.h>

int main()
{
    int i,j,k,m,n;
    char s[102],a[5];
    scanf("%s",&s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='h')
        {
            a[0]='h';
            break;
        }

    }
    for(j=i+1;j<l;j++)
    {
        if(s[j]=='e')
        {
            a[1]='e';
            break;
        }

    }
    for(k=j+1;k<l;k++)
    {
        if(s[k]=='l')
        {
            a[2]='l';
            break;
        }

    }
    for(m=k+1;m<l;m++)
    {
        if(s[m]=='l')
        {
            a[3]='l';
            break;
        }

    }
    for(n=m+1;n<l;n++)
    {
        if(s[n]=='o')
        {
            a[4]='o';
            break;
        }

    }
    printf("%s\n",a);
    if(a=='hello')
    {
        printf("YES");
    }
    else
        printf("NO");


    return 0;
}
