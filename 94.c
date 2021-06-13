#include<stdio.h>
int check(long long x) {
	long long a[100],j=1;
	while (x!=0) {
		a[j]=x%10;
		x/=10;
		j++;
	}
	for (int i=1;i<j-1;i++) {
		if (a[i]<a[i+1]) return 0;
	}
	return 1;
}
int main () {
    long long x,y,n,l;
    scanf("%lld",&l);
    for (int y=1;y<=l;y++) {
    	scanf("%lld",&n);
    	if (check(n)) printf("YES\n"); else printf("NO\n");
	}
   
}