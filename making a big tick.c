#include<stdio.h>
#include <iostream>
#include <fstream>

struct node {
int p ;
struct node*next ;
};
int main()
{
    int i;
    struct node *n;
    printf("%d\n", sizeof(*n));
    printf("%d\n", sizeof(i));

}
