#include<stdio.h>
#include<string.h>
void dichmang(int b[], int n,int m) {
		int z=m;
	for (int i=n-1;i>=1;i--) {
				b[i]=b[z-1];
				z--;
			}
			for (int i=1;i<=n-m;i++) {
				b[i]=0;
			}
}
int main () {
	int t;
	char s1[500],s2[500];
	scanf("%d",&t);
	while(t--) {
		int a[500],n,m,b[500],c[501],k;
		n=1;m=1;
		scanf("%s",s1);
		scanf("%s",s2);
		for (int i=0;i<strlen(s1);i++) {
			a[n++]=s1[i]-48;
		}
		for (int i=0;i<strlen(s2);i++) {
			b[m++]=s2[i]-48;
		}
		int z=m,d=n;
		if (n>m) {
			dichmang(b,n,m);
		} else {
			dichmang(a,m,n);
		}	
		int x,y,nho=0,tong;
		if (n>=m) {
			x=n-1;
			k=n-1;
		} else {
			k=m-1;
			x=m-1;
		}
		
		for (int i=k;i>=2;i--) {
			tong = a[i]+b[x] + nho;
			if (tong<=9) {
				nho=0;
				c[x]=tong;
			} else {
				c[x]=tong%10;
				nho=1;
			}
			x--;
		}
		c[x]=a[1]+b[1]+nho;
		
		for (int i=1;i<=k;i++) printf("%d",c[i]);
		printf("\n");
	}
}