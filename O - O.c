#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    while(n--)
    {
        int e=0;
        char s[101],t[101];
        scanf("%s %s",&s,&t);
        for(int i=0;i<strlen(s);i++)
        {
            for(int j=0;i<strlen(s);i++)
            {
                if(s[i]==t[j]){
                printf("YES\n");
                e++;
                break;}
            }
            if(e)
                break;
        }


       if(e==0)
        printf("NO\n");


    }



    return 0;
}
