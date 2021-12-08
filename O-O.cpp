#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n,i,j;
    scanf("%d",&n);
    char s[n+1],t[n+1];
    while(n--)
    {
       char x;
       scanf("%s %s",&s,&t);
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               if(s[i]>s[j])
               {
                   x=s[i];
                   s[i]=s[j];
                   s[j]=x;
               }
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
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
