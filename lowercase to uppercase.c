//without using library functions//
#include<stdio.h>

 int main()
 {


     char cu;
     printf("Enter an uppercase letter :");
     scanf("%c", &cu);
     /* Suppose here the input is given a
     we know the ASCII value of a is 97
     and the uppercase of this is A, which has the ASCII value
     of 65. The difference of an uppercase letter to a lowercase
     letter will always be 32.
     Which is why in the process of generating the output,
     we add 32. */

     printf("The lowercase of your given letter is: %c",cu+32);

     getch();
     return 0;
 }

