#include <stdio.h> 
#include <math.h>
int uuthe(long int x) {
	int chan=0,le=0;
	while (x!=0) {
		int y=x%10;
		if (y%2==0) chan++; else le++;
		x/=10;
	}
	if (chan==le) return 1; 
	return 0;
	}
int main () {
	long int n,a,b,dem=0,i;
	scanf("%ld",&n);
	a=pow(10,n-1); b=pow(10,n);
	for (i=a;i<b;i++) {
		if ( uuthe(i) ) {
			printf("%ld ",i);
			dem++;
		}
		if (dem==10) {
			 printf("\n");
			 dem=0;
		}
	}
}