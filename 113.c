#include<stdio.h>
main () {
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++) {
		long long a[100];
		long long dem=0;
		long long n;
		scanf("%lld",&n);
		while(n!=0) {
			long long x=n%10;
			a[dem++]=x;		
			n/=10;
		}	
		int kt=0;
	for(int i=0;i<dem;i++) {
		if(a[i] %2 == 1) kt=1;
		}
	if(n%2==0 && kt ==0) printf("YES\n");
	else printf("NO\n")	;
     }
}