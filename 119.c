#include <stdio.h>
#include<math.h>
int check(long long n) {
	long long m=n;
	long long dao=0;
	
	while(m!=0) {
		dao=dao*10+m%10;
		m=m/10;
	}
	 
	if(dao==n) {
		return 1;
	}
	return 0;
}
int check1(long long n){
	long long a[100];
long long dem=0;
while(n!=0) {
			long long x=n%10;
			a[dem++]=x;		
			n/=10;
		}	
for(long long i=0;i<dem;i++) {
	if(a[i]%2==0)
	return 0;
}
return 1;
}	
int  check2(long long a ) {
 	long long dem =0;
 	long long n;
 	while (a>0) {
 		n=a%10;
 		dem=dem+n;
 		a=a/10;
 	}
 	return dem;
}
main () {
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++) {
		long long n;
		scanf("%lld",&n);
		if(check(n)==1 && check1(n)==1 && check2(n)%2==1) printf("YES\n");
		else printf("NO\n");
	}
}