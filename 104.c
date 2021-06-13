#include<stdio.h>
int check(int a[],int n) {
	int dem=0;

	for (int i=0;i<n;i++) {
		if (a[i]==a[i+1]) dem=dem+1;
	} 
	return dem;
}
int main () {
	int k;
	scanf("%d",&k);
	for(int j=1;j<=k;j++) {
	int x[100],n;
	
	
	scanf("%d ",&n);
	
	
	for(int i=0;i<n;i++) {
		scanf("%d",&x[i]);}
		
		printf("%d",check(x,n));
			printf("\n");
			
		}
	}