#include<stdio.h>
int main ()
{

    printf("Enter a string:");


    char s[20],a[20],b[20];

    gets(s);

    strupr(s);

    strcpy(a,s);
    strlwr(s);

    strcpy(b,s);



    printf("The uppercase string is: %s\n",a);
    printf("The lowercase string is: %s",b);


    return 0;
}
