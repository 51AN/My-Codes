#include<stdio.h>

int main()
{
    int a,b,c,s[7],i=0,j,x;

    scanf("%d%d%d",&a,&b,&c);


    s[i]=a*b*c;
    i++;
    s[i]=a+b+c;
    i++;
    s[i]=a*b+c;
    i++;
    s[i]=a+b*c;
    i++;
    s[i]=(a+b)*c;
    i++;
    s[i]=a*(b+c);


    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(s[i]>s[j])
            {
                x=s[i];
                s[i]=s[j];
                s[j]=x;
            }
        }
    }

  printf("%d",s[5]);




    return 0;
}
