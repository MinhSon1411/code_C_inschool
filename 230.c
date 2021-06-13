#include <stdio.h>



long long  GCD (long long a, long long b) {
    long long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long long LCM(long long  a, long long b) {
    return (a*b)/GCD(a,b);
}

int main () {
    int t;
    scanf("%d",&t);
    while (t--) {
    	int n;
    	scanf("%d",&n);
    	long long temp=1;
    	for (int i=1;i<=n;i++) {
    		temp=LCM(temp,i);
		}
	printf("%lld\n",temp);
	
	}
  
}