#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,k,pos,ans;
		scanf("%d%d",&n,&k);
		if (k==1||k==n)
            ans=1;
        else
            ans=2;
		if (k==1&&n==1)
            ans=0;
		printf("%d\n",ans);
	}

	return 0;
}
