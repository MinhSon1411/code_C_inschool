#include<stdio.h>
int main () {
	int g;
	scanf("%d",&g);
	for(int h=1;h<=g;h++ ) {
	
	int a[100],n,b[100],m,k;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0; i<n ; i++){
		scanf("%d",&a[i]) ;
	}
	for(int i=0;i<m;i++) {
		scanf("%d",&b[i]);
	}

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
	  printf("Test %d:\n",h);
	  for(int i=0;i<dem;i++) {
	  	 printf("%d ",c[i]);
	  	}
	  	printf("\n");
	
	}
	}