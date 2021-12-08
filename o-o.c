#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
       char s[101],t[101];
       char x;
       scanf("%s %s",&s,&t);
       for(int i=0;i<strlen(s);i++)
       {
           for(int j=i+1;j<strlen(s);j++)
           {
               if(s[i]>s[j])
               {
                   x=s[i];
                   s[i]=s[j];
                   s[j]=x;
               }
           }
       }
       for(int i=0;i<strlen(s);i++)
       {
           for(int j=i+1;j<strlen(s);j++)
           {
               if(t[i]>t[j])
               {
                   x=t[i];
                   t[i]=t[j];
                   t[j]=x;
               }
           }
       }
       if(s[0]==t[0])
        printf("YES\n");
       else
        printf("NO\n");


    }



    return 0;
}
