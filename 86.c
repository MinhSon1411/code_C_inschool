#include<stdio.h>
main () {
	int k;
	scanf("%d",&k);
	for (int j=1;j<=k;j++) {
		int i =2 ;
		long int n;
		scanf("%ld",&n);
		
		while (n>1) {
			
			if (n%i==0) {
				printf("%ld",i);
				 if(n!=i) {
				 	printf(" ");
				 }
				n=n/i;}
			 else {
			 	i++;
			 }	 
			}
			printf("\n");
		}
	}