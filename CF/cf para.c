#include<stdio.h>
int main()
{

    int i,n,m;
    printf("Enter a Natural number:");
    scanf("%d%d",&n,&m);



    for(i=2;i<m;i++)
    {
        if(m%i==0)
          {

            printf("%d is not a prime number",m);
            break;
          }

     else {

            printf("%d is a prime number",m);
            break;
          }
    }





    getch();
    return 0;
}
