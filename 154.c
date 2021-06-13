#include<stdio.h>
#include<math.h>
int main() {
	int n,a[100],x=1;
	scanf("%d",&n);
	for(int i=1;i<=100;i++) a[i]=i;
	for (int i=1;i<=n;i++) {
		if (i%2==0) {
			for (int j=x+i-1;j>=x;j--) {
				printf("%c ",a[j] +'a'-1);
			}
			printf("\n");
			x+=i;
		} else {
			for (int j=x;j<=x+i-1;j++) {
			printf("%c ",a[j]+'a'-1);
			}	
			x+=i;
			printf("\n");
		}
	}
}