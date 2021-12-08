#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////avg with function//////////////////////////////////////

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


/////////////////////////swapping with and without reference(pointers)////////////////////////


// void swap_them_by_val(int num1, int num2)
// {
//     int temp=num1;
//     num1=num2;
//     num2=temp;
// }

// void swap_them_by_ref(int *num1, int *num2)
// {
//     int temp=*num1;
//     *num1=*num2;
//     *num2=temp;
// }
// int main()
// {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     swap_them_by_val(a,b);
//     printf("Passing just value doesnt change the value: %d %d\n",a,b);
//     swap_them_by_ref(&a,&b);
//     printf("Refering changes the value: %d %d\n",a,b);

    

    
// }

///////////////////////////Factorial with recurssion/////////////////////////////
// int fact(int n)
// {
//     if(n<=1)
//      return 1;
//     else
//         return (n*fact(n-1));
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int x;
//     x=fact(n);
//     printf("%d",x);
// }



///////////////////////////Summation with recurssion/////////////////////////////




// int sum(int n)
// {
//     if(n==0)
//      return 0;
//     else
//         return (n+sum(n-1));
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int x;
//     x=sum(n);
//     printf("%d",x);
// }



///////////////////////////fibonacci with recurssion/////////////////////

// int fibo(int n)
// {
//     if(n<=1)
//         return n;
//     return fibo(n-1)+fibo(n-2);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",fibo(n));
//     return 0;
// }


///////////////////////////////pointer arithmetics with arrays///////////////////////////////////

// int main()
// {
//     int a[]={2,4,6,8,10,12,14,16,18,20};
//     int b[]={1,3,5,7,9,11,13,15,17,19};

//     int *p,*q;

//     p=&a[0];

//     for(int i=0;i<10;i++)
//     {
//         *(p+i)=69;//same as using a[i]=0; also same as *(a+i)=69
//     }

//     for(int i=0;i<10;i++)
//     {
//         printf("%d ",*(p+i));
//     }
//     printf("\n");
//     for(int i=0;i<10;i++)
//     {
//         printf("Memory address : %d, and Value: %d\n",p++,*(p));
//         printf("Memory address : %d, and Value: %d\n",p+i,*(p+i));//same
        

//     }
    
// }







int main()
{

    int a[3][3];

    int *p;

    for(p=&a[0][0];p<=&a[2][2];p+=3)
    {
        *p=5;
        
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);




    return 0;
}