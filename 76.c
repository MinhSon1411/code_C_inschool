#include<stdio.h>
int main () {
	long int n;
	scanf("%ld",&n);
	 long int s=1;
	 long int a=0;
	for(long int i=1;i<=n;i++) {
		s*=i;
		a+=s;
		}
		printf("%ld",a);
		}