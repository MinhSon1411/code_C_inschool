#include<stdio.h>
#include<math.h>
int main() {
	int k=4,n;
	long int i,c[100];
	c[1]=1;c[2]=1;c[3]=2;
	while(k<=92) {
		c[k]=c[k-1]+c[k-2];
		k++;
	}
	
	scanf("%d",&k);
	for (int i=1;i<=k;i++) {
		scanf("%d",&n);
		printf("%ld\n",c[n]);
	}
}