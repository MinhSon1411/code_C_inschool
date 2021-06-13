#include<stdio.h>
#include<math.h>
int check1(int x) {
	if(x<2) return 0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}
int main () {
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++) {
		int n;
		scanf("%d",&n);
		if(n%2==0) {
			for(int i=0;i<=n/2;i++) {
				int x=n-i;
				if(check1(i)==1 && check1(x)==1)
				printf("%d %d ",i,x);
			}
		}
			printf("\n");
	}
}