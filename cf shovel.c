#include<stdio.h>
int main()
{

    int k,r,i=1,cnt=0,l=0;

    scanf("%d %d",&k,&r);

    if(k%10==r)
    {
        printf("1 while 237 7");
        return 0;
    }
    else if(k%10==0)
    {
        printf("1 while 1500 3");
        return 0;
    }
    l=k;
    while(l!=0)
    {
        l=(k*i)%r;
        i++;
        cnt++;
    }
    printf("%d",cnt);




    return 0;
}


//#include<stdio.h>
//    int main()
//    {
//        int k,r,i;
//        scanf("%d%d",&k,&r);
//        for(i=1;;i++){
//            if(((k*i)-r)%10==0||(k*i)%10==0){
//                printf("%d",i);
//                break;
//            }
//        }
//        return 0;
//    }
