#include<stdio.h>
int main(){
	long long int k,d;
	scanf("%d %d",&k,&d);
	int i=0;
	if(k>1 && d == 0)
		printf("No sloution");
	else{
		int a[k];
		for(i=0;i<k;i++)
			a[i]=0;
		    a[0]=d;
		for(i=0;i<k;i++)
			printf("%d\n",a[i]);

		}
	return 0;
	}
