#include<stdio.h>

void nhap(int a[], int k){
	int i;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
}

int dem(int a[],int m){
	int i;
	int n=0,k=0;
	for(i=m-1;i>=0;i--){
		k++;
	}
	for(i=m-1;i>=0;i--){
		if(a[m]>=a[i]) n++;
	}
	if(k==n) return 1;
}

int dem1(int a[], int k){
	int i;
	int m=0;
	for(i=0;i<k;i++){
		if(dem(a,i)==1) m++;
	}
	return m;
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a[100];
		int k;
		scanf("%d",&k);
		nhap(a,k);
		printf("%d\n",dem1(a,k));
	}
	return 0;
}