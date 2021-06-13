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
 
 void check1(int a[],int n) {
	for (int i=0;i<n;i++ ) {
		if(a[i]%2!=0) {
			printf("%d ",a[i]);
		}
	}
}
 
int main () {

		int n;
 scanf("%d",&n);
 int a[n];
 nhapmang(a,n);
 check(a,n);
 printf("\n");
 check1(a,n);
 
	}