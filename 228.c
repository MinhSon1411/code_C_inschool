#include<stdio.h>	
#include<math.h>
int check1(int x) {
	int dem=0;
	if(x<2)
    return 0;	
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}
int main () {
	int k;
	scanf("%d",&k);
	while(k--) {
	long long a,b;
	scanf("%lld %lld",&a,&b);
	int dem=0;
	for(long long i=sqrt(a) ; i<=sqrt(b);i++) {
		if(check1(i)==1 )
		dem++;
	 } 	
	printf("%d\n",dem);
	}	
  }