#include<stdio.h>
main ()
{

    int x,y;
    printf("Enter an Integer number:");
    scanf("%d",&x);

    y=++x;/*here since it is a pre decrement, x will have 1 more than it's inputed value.
            so y will now have the incremented value of x.*/

    printf("x=%d \ny=%d",x,y);/*even though there is an x here, there will not be
                                an increment here since this is a pre increment.
                                So, x & y will have the same incremented value*/



    getch();
    return 0;


}
