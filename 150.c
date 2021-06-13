#include<stdio.h>

int main() {
    int n,a[100],x,i,dem,y;
    scanf("%d",&n);
    for ( i=1;i<=n;i++) {
    	scanf("%d",&a[i]);
	}
	for ( i=1;i<n;i++) {
		for (int j=i+1;j<=n;j++) {
			if (a[i]>a[j]) {
				x=a[j];
				a[j]=a[i];
				a[i]=x;	
			}
		}
	}
	dem=0;
	for (i=1;i<=n;i++) {
		if (a[i]%2==0) {
			dem=dem+1;
		}
	}
	y=1;
	for (i=1;i<=n;i++) {
		if (a[i]%2==0) {
			x=a[y];
			a[y]=a[i];
			a[i]=x;
			y=y+1;
		}
	}
	for ( i=dem+1;i<n;i++) {
		for (int j=i+1;j<=n;j++) {
			if (a[i]>a[j]) {
				x=a[j];
				a[j]=a[i];
				a[i]=x;	
			}
		}
	}
	
	for (i=1;i<=n;i++) {
		printf("%d ",a[i]);
	}
	
	
}