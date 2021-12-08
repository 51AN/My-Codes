//Without using library functions//

#include<stdio.h>
 int main()
 {

     char cl;
     printf("Enter lower case letter :");
     scanf("%c", &cl);
     /* Suppose here the input is given a
     we know the ASCII value of a is 97
     and the uppercase of this is A, which has the ASCII value
     of 65. The difference of an uppercase letter to a lowercase
     letter will always be 32.
     Which is why in the process of generating the output,
     we subtract 32. */

     printf("The uppercase of your given letter is: %c",cl-32);

     getch();
     return 0;
 }
