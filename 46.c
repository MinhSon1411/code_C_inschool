#include<stdio.h>
void nhap(int a[],int n) {
	int i=0;
	while (i<n) {
		scanf("%d",&a[i]);
		i++;
	}
}
void swap(int a[],int c[],int n,int b) {
 
	int dem=0;
	int i=b;
	while(i<n){

		c[dem++]=a[i];
		i++;
	}
	int j=0;
	while(j<b){
	    c[dem++]=a[j];
	    j++;
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