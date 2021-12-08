#include<stdio.h>
int main()
{

    int a,b,c;

    printf("Enter two integer numbers:");
    scanf("%d %d",&a,&b);


        c=a&b;
        printf("a&b = %d",c);//Binary and//

        c=a|b;
        printf("\na|b = %d",c);//binary or//

        c=a^b;
        printf("\na^b = %d",c);//binary xor//








    getch();
    return 0;
}
