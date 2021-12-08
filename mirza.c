#include <stdio.h>
#include <string.h>

int main(){
    int a,b,c,d,l,s,s1,s2,l1,l2;
    printf("Enter 4 digits: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    l1=a;
    s1=b;

        if(a<b)
        {
            s1=a;
            l1=b;
        }
    l2=c;
    s2=d;

        if(c<d)
        {
            s2=c;
            l2=d;
        }
    s=s2;
    l=l2;

        if(s1<s)
        {
            s=s1;
        }

        if(l<l1)
        {
            l=l1;
        }
    printf("Largest: %d\n",l);
    printf("Smallest: %d\n",s);



    return 0;
}
