#include<stdio.h>
#include<string.h>
int main()
{

int i,c=1;
char f[100];
gets(f);
for(i=0;i<strlen(f);i++){
if(f[i] == f[i+1]){
c++;
if(c==7){
printf("YES");
return 0;
}
}
else{c=1;}
}
printf("NO");


return 0;

}
