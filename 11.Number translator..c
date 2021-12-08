#include<stdio.h>
int main()
{
    int n;
    printf("Enter a two digit number: ");
    scanf("%2d",&n);
    int a,b;
    if(n==11)
        printf("eleven");
    if(n==12)
        printf("twelve");
    if(n==13)
        printf("thirteen");
    if(n==14)
        printf("fourteen");
    if(n==15)
        printf("fifteen");
    if(n==16)
        printf("sixteen");
    if(n==17)
        printf("seventeen");
    if(n==18)
        printf("eighteen");
    if(n==19)
        printf("nineteen");
        if(n==10)
            printf("ten");

    a=n%10;
    b=n/10;
    if(b==2)
        printf("twenty");
    if(b==3)
        printf("thirty");
    else if(b==4)
        printf("forty");
    else if(b==5)
        printf("fifty");
    else if(b==6)
        printf("sixty");
    else if(b==7)
        printf("seventy");
    else if(b==8)
        printf("eighty");
    else if(b==9)
        printf("ninety");

    if(a==1)
        printf("-one");
    else if(a==2)
        printf("-two");
    else if(a==3)
        printf("-three");
    else if(a==4)
        printf("-four");
    else if(a==5)
        printf("-five");
    else if(a==6)
        printf("-six");
    else if(a==7)
        printf("-seven");
    else if(a==8)
        printf("-eight");
    else if(a==9)
        printf("-nine");




    return 0;
}
