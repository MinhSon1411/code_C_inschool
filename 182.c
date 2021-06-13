#include<stdio.h>
main () {
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++) {
	int a[100][100],b[100][100];
	int n;
	scanf("%d",&n);
	int c[100][100];
	printf("Test %d:\n",i);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(j<=i) a[i][j]=j;
			else a[i][j]=0;
		}
	}
		for(int i=1;i<=n;i++) {
	    	for(int j=1;j<=n;j++) {
	    	b[i][j]=a[j][i];
	   }
   }
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
		c[i][j]=0;
		  for(int k=1;k<=n;k++) {
		  	c[i][j]=c[i][j]+a[i][k] * b[k][j];
	    }
	} 
  }
 	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
	    printf("%d ",c[i][j]);
    }
    printf("\n");
   }
 }
}