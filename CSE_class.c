#include<stdio.h>

// double avg(int a,int b)
// {
//     a++;
//     b--;
//     int x,y;
//     double average = (a+b)/2.0;
//     return average;
// }
// int main()
// {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("The average of %d and %d is: %lf",x,y,avg(x,y));
//     return 0;
// }

void swap_them_by_val(int num1, int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}

void swap_them_by_ref(int *num1, int *num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap_them_by_ref(&a,&b);
    printf("Refering changes the value: %d %d\n",a,b);

    
    swap_them_by_val(a,b);
    printf("Passing just value doesn changes the value: %d %d\n",a,b);

    
}