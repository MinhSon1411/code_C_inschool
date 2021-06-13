#include<stdio.h>
void nhapmang(int a[], int n){
    for(int i = 0;i < n; i++){
        
        scanf("%d", &a[i]);
    }
}

void max1(int a[],int n) {
	int max=a[1] ;
	for(int i=0;i< n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
printf("%d ",max);	
}
void max2(int a[],int n) {
	int max=a[0] ;
	for(int i=0;i< n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
}
	int max2=a[0] ;
	for(int i=0;i<n;i++) {
		if(a[i]>max2&&a[i]<max)
		max2=a[i];
	}
printf("%d",max2);		
	
}
int main () {
	int n;
	scanf("%d",&n);
	int a[n];
	nhapmang(a,n);
	max1(a,n);
	max2(a,n);
}