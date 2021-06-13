#include<stdio.h>
#include<math.h>
void check(int x) {
	int s=0;
	for (int i=1;i<=x/2;i++) {
		if (x%i==0) s+=i;
	}
	if (s==x) printf("%d ",x);
}
int main() {
	int n;	
	scanf("%d",&n);
	if (n<8128) {
		for (int i=2;i<n;i++) {
		check(i);
	}
	} else {
		n=8129;
		for (int i=2;i<n;i++) {
		check(i);
	}
	}
}