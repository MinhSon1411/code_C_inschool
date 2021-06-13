#include<stdio.h>

void nhapmang(int a[], int n){
    for(int i = 0;i < n; i++){
        
        scanf("%d", &a[i]);
    }
}
void check(int a[],int n) {
	for (int i=0;i<n;i++ ) {
		if(a[i]%2==0) {
			printf("%d ",a[i]);
		}
	}
}
 
void xuatmang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}
 
int main () {
	int k;
	scanf("%d",&k);
	for (int i=1;i<=k;i++) {
		int n;
 scanf("%d",&n);
 int a[n];
 nhapmang(a,n);
 check(a,n);
 printf("\n");
	}
 
 
}