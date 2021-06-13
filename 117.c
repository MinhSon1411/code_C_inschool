#include<stdio.h>
#include<math.h>
int main() {
	int n,k,dem,x;
	scanf("%d",&k);
	for (int i=1;i<=k;i++) {
		scanf("%d",&n);
		printf("%d = ",n);
		x=n;int count=0;
		for (int j=2;j<=n;j++) {
			dem=0;
			while (n%j==0) {
				count++;
				dem++;
				n/=j;
			}
			if(dem>=1 && count==dem) 	printf("%d^%d",j,dem); else	 if(dem>=1)	printf(" * %d^%d",j,dem);
		}
		printf("\n");
	}
}