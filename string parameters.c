
#include<stdio.h>

int main()
{
    char source[]="Hello bitches";

    char target[20];

    strcpy(target,source);

    printf("%s",target);







    char attach[]=" how are ya all doing?";

    strcat(source,attach);
    printf("\n%s",source);

     return 0;
}
