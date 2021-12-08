#include<stdio.h>
#include<string.h>
int main()
{



    char source[]="hey all";
    char attach[]=" how are ya all doing?";

    strcat(source,attach);
    printf("%s",source);

    return 0;
}
