#include<stdio.h>
int main ()
{

    int a,b,c;

    printf("Enter three integer numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c&&b>c)
    {
        printf("%d is the largest number \n%d is the smallest number",a,c);

    }
    if(a>b&&a>c&&b<c)
    {
        printf("%d is the largest number \n%d is the smallest number",a,b);

    }
    else if(c>a&&c>b&&a>b)
    {
         printf("%d is the largest number \n%d is the smallest number",c,b);

    }
    else if(c>a&&c>b&&a<b)
    {
         printf("%d is the largest number \n%d is the smallest number",c,a);

    }
    else if (b>a&&b>c&&c>a)
    {
         printf("%d is the largest number \n%d is the smallest number",b,a);

    }
    else if (b>a&&b>c&&c<a)
    {
         printf("%d is the largest number \n%d is the smallest number",b,c);

    }

    getch();
    return 0;
}
