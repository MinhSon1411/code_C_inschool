#include<stdio.h>
int check(long long x) {
	long long a[100],j=0;
	while (x!=0) {
		a[j]=x%10;
		x/=10;
		j++;
	}
	for (int i=0;i<j-1;i++) {
		if (a[i]>=a[i+1]) return 1;
	}
	return 0;
}
main () {
    int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
		long long  a,b;
		int dem=0;
		scanf("%lld%lld",&a,&b);
		for(long long i=a;i<=b;i++) {
			if(check(i)==0) dem++;
		}
		printf("%d",dem);
		printf("\n");
	}	
}