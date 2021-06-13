#include<stdio.h>
#include<stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++) {
	long long n,x,dem=0;
	int a[100];
	scanf("%lld",&n);
	x=n;
	while(n!=0) {
		dem++;
		n/=10;
	}
	for (long long i=dem;i>=1;i--) {
		a[i]=x%10;
		x/=10;
	}
	int kt=0;
	if( a[1] / 2 ==a[dem] || a[dem] / 2 == a[1]) kt=1;
	long long g=dem;
	long long c =dem-1;
	long long b=c;
	long long dem1=0;
    for(long int i=2;i<=c,c>=2;i++,c--) {
    	if(a[i]==a[c]) dem1++;
    }
    
    
	if(dem1==b-1 && kt ==1 ) printf("YES\n");
	else printf("NO\n");
    }	
}