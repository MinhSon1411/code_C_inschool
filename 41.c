#include<stdio.h>
int main () {
	int a[100],n,b[100],m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n ; i++){
		scanf("%d",&a[i]) ;
	}
	for(int i=0;i<m;i++) {
		scanf("%d",&b[i]);
	}
	int k;
	scanf("%d",&k) ;
	int c[100];
	int dem=0;
	for(int i=0;i<k;i++) {
	 c[dem++]=a[i];
	 }
	 for(int i=0;i<m;i++) {
	 c[dem++]=b[i];
	 }
	 for(int i=k;i<n;i++) {
	  c[dem++]=a[i];
	  }
	  for(int i=0;i<dem;i++) {
	  	 printf("%d ",c[i]);
	  	}
	}