#include<stdio.h>
int main()
{
    int m,d,y;
    printf("Please enter the date (mm/dd/yyy):");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("Your entered value: ");
    printf("%0.4d",y);
    printf("%0.2d",m);
    printf("%0.2d",d);








    return 0;
}
