#include<stdio.h>
void check(int n) {
	

	long long f1 = 1, f0 = 0, fn;
	int i;
	for(i = 0; i < n; i++) {
		if(i <= 1) {
			fn = i;
		} else {
			fn = f1 + f0;
			f0 = f1;
			f1 = fn;
		}
		printf("%lld ",  fn);	}
	}	
int main () {
	int n;
	scanf("%d",&n);
	check(n);
	}