#include<stdio.h>
main ()
{

    int x,y;
    printf("Enter an Integer number:");
    scanf("%d",&x);

    y=x++;/*here since it is a post decrement, x will have it's inputed value.
            so y will now have the value of x.*/

    printf("x=%d \ny=%d",x,y);/*here there is an x, so there will be an increment
                                so x will be 1 more than y*/



    getch();
    return 0;

}
