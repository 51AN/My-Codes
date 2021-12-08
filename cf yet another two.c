#include<stdio.h>
int main()
{

//    long long int a,b,t,i,x=0,cnt=0;
//    scanf("%lld",&t);
//    long long int y[t];
//
//    for(i=0;i<t;i++)
//    {
//        scanf("%lld%lld",&a,&b);
//        if(a>b)
//        {
//            x=a-b;
//            while(x>=10)
//            {
//                x=x-10;
//                cnt++;
//            }
//            if(x==9)
//            {
//                x=x-9;
//                cnt++;
//            }
//            if(x==8)
//            {
//                x=x-8;
//                cnt++;
//            }
//            if(x==7)
//            {
//                x=x-7;
//                cnt++;
//            }
//            if(x==6)
//            {
//                x=x-6;
//                cnt++;
//            }
//            if(x==5)
//            {
//                x=x-5;
//                cnt++;
//            }
//            if(x==4)
//            {
//                x=x-4;
//                cnt++;
//            }
//            if(x==3)
//            {
//                x=x-3;
//                cnt++;
//            }
//            if(x==2)
//            {
//                x=x-2;
//                cnt++;
//            }
//            if(x==1)
//            {
//                x=x-1;
//                cnt++;
//            }
//
//
//        }
//        else if(a<=b)
//        {
//            x=b-a;
//            while(x>=10)
//            {
//                x=x-10;
//                cnt++;
//            }
//            if(x==9)
//            {
//                x=x-9;
//                cnt++;
//            }
//            if(x==8)
//            {
//                x=x-8;
//                cnt++;
//            }
//            if(x==7)
//            {
//                x=x-7;
//                cnt++;
//            }
//            if(x==6)
//            {
//                x=x-6;
//                cnt++;
//            }
//            if(x==5)
//            {
//                x=x-5;
//                cnt++;
//            }
//            if(x==4)
//            {
//                x=x-4;
//                cnt++;
//            }
//            if(x==3)
//            {
//                x=x-3;
//                cnt++;
//            }
//            if(x==2)
//            {
//                x=x-2;
//                cnt++;
//            }
//            if(x==1)
//            {
//                x=x-1;
//                cnt++;
//            }
//        }
//
//
//        y[i]=cnt;
//        cnt=0;
//
//    }
//    for(i=0;i<t;i++)
//    {
//        printf("%lld\n",y[i]);
//    }
//
//
//
//


    int a,b,t,i,y=0,cnt=0;

    scanf("%d",&t);
    int x[t];

    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);

        y=abs(a-b);
        if(y%10==0)
        {
            x[i]=y/10;
        }
        else
        {
            x[i]=(y/10)+1;
        }

    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
