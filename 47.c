#include<stdio.h>
void nhap(int a[],int n) {
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
}
void swap(int a[],int c[],int n,int b) {
 int dem=0;
	for(int i=n-b;i<n;i++) {
	c[dem++]=a[i];}
	for(int i=0;i<n-b;i++) {
		c[dem++]=a[i];
		
	}
}
void out(int a[],int n) {
	for(int i=0;i<n;i++) {
		printf("%d ",a[i]);
	
    }  
}
int main () {
	int n,a[50],c[50];
	scanf("%d",&n);
	nhap(a,n);
	int k;
	scanf("%d",&k);
	swap(a,c,n,k);
	out(c,n);

	
}