#include <stdio.h>

int main() {
	long int k;
	scanf("%ld",&k);
	for(long int i=1;i<=k;i++) {
		long int n;
		scanf("%ld",&n);
	   long 	int dao=0;
	long 	int m=n;
		while(m!=0) {
			dao=dao*10+m%10;
			m=m/10;
		}
		if(dao==n) {
			printf("YES");
		} else {
			printf("NO");
		} printf("\n");
	}
}