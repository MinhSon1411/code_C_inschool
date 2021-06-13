#include<stdio.h>
#include<math.h>
int check(int x) {
	int dem=0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d",&n);
	for (int i=2;i<=n;i++) {
		if(check(i)) printf("%d\n",i);
	}
}