#include<stdio.h>
#include<math.h>
int check(int a, int b) {
	int ucln;
	if (a==0 || b==0) ucln=a+b;
	while(a!=b) {
		if(a>b) a-=b; else b-=a;
	}
	ucln=a;
	if (ucln==1) return 1; else return 0;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=a;i<b;i++) {
		for (int j=i+1;j<=b;j++) {
			if (check(i,j)) printf("(%d,%d)\n",i,j);
		}
	}
}