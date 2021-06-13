#include<stdio.h>
#include<math.h>
int main() {
	int a[100],n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	for (int i=1;i<n;i++) {
		int dem=0;
		for (int j=i+1;j<=n;j++) {
			if (a[i]==a[j]) dem++;
		}
		if (dem>=1) {
			int s=0;
			for (int k=1;k<i;k++) if(a[i]==a[k]) s++;
			if(s==0) printf("%d ",a[i]);
		}
	}
}