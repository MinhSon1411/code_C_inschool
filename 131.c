#include<stdio.h>
int main () {
	float a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%f",&a[i]);
	}
	float sum;
	float tong=0;
	for(int i=0;i<n;i++) {
		tong=tong+a[i];
		
	}
	printf("%0.3f",tong/n);
}