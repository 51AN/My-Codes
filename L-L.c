#include<stdio.h>
int main()
{
    int n;
    char s[n+1];
    int x;
    scanf("%d",&n);
    x=n;
    while(n--)
    {
        scanf("%s",&s);
         int cnt1= 0,cnt0 = 0;
         for(int i = 0;i < n;i++)
         {
             if(s[i] == '1')
                cnt1++;
             else
                cnt0++;
         }
         if(cnt0!=cnt1)
            printf("1\n%s",s);
         else{
             printf("2\n%c ",s[0]);
             for(int i = 1;i < x;i++)             {
                printf("%c",s[i]);
             }
             printf("\n");
         }
     }
    return 0;
 }
