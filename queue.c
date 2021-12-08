#include<stdio.h>
int main()
{

    int n,t,m=0,k,i;
    char s[101];
    scanf("%d %d\n",&n,&t);
    scanf("%s",&s);

    for(i=0;i<t;i++)
    {
        if(s[i]=='B')
        {
        if(s[i+1]=='G')
        {
            for(k=1;s[i+k]=='G';k++)
          {
              s[i+m]='G';
              s[i+k]='B';
              m++;
          }
        }
        }
    }
    printf("%s",s);






    return 0;

}
