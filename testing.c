#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n,countEven=0, countOdd=0;

    printf("Enter Number of students in SWE: ");
    scanf("%d",&n);
int students[n];
int Oddstud[n],Evenstud[n];
for(int i=0;i<n;i++){
    scanf("%d",&students[i]);
    if(students[i]%2==0){
        Evenstud[countEven]=students[i];
        countEven++;
    }
    else{
        Oddstud[countOdd]=students[i];
        countOdd++;
    }
}


    printf("\'%d\' students in A group \n \'%d\' students in B group",countOdd,countEven);
    return 0;
}

