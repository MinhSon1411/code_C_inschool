#include<stdio.h> 
int main () {
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++) {
	int a[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		}
	int max=a[0] ;
	
	int dem=0;
	for(int i=1;i<n;i++) {
	  if(a[i]>max) {
	    max=a[i];
		
		}
		}
		printf("%d\n",max);
		
	for(int i=0;i<n;i++) {
	 if(a[i]==max) {
	 printf("%d ",i);
	 }
	} 
	printf("\n");
}		
}