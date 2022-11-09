//a=7 b=5

#include<stdio.h>

int main()
{

    int a,b,cntc=0,cntd=0;
    scanf("%d %d",&a,&b);

if(a>b)
{
    while(b!=0)
            {
           a=a-1;//2
           b=b-1;//0
           cntc++;//5
            }
}
else if(a==b)
{
    printf("%d 0",a);
    return 0;
}
else
{
    while(a!=0)
        {
           a=a-1;//2
           b=b-1;//0
           cntc++;//5
        }
}

    if(a==0)
    {
         if(b%2==0)
        {
            while(b!=0)
            {
             b=b-2;
             cntd++;
            }
        }
        else
        {
            b=b-1;
            while(b!=0)
            {
             b=b-2;
             cntd++;
            }

        }
    }
    else if(b==0)
    {
        if(a%2==0)//2
        {
            while(a!=0)
            {
             a=a-2;//2-2=0
             cntd++;//1
            }
        }
        else
        {
            a=a-1;
            while(a!=0)
            {
             a=a-2;
             cntd++;
            }

        }
    }
    printf("%d %d",cntc,cntd);//1 1


      return 0;
}
