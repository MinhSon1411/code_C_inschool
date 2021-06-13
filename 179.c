#include<stdio.h>
int main () {
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
		long long a[100];
		long long dem3=0;
	   
	
	
	long long  n;
	long int i=2;
	scanf("%lld",&n);

	long int c[100];
	long int dem=0;
	while(n>1) {
		if(n%i==0) {
			c[dem++]=i;
			n=n/i;
			}
			
		else i++;
		}	
	for(long long i=0 ; i<dem ; i++){
		long long dem2=0;
		
		long long count=1;
		
		for(long long j=0 ; j<dem ; j++){
			if(i == j)
				continue;
			if(c[i] == c[j] && i>j)
				dem2=1;	
			if(c[i] == c[j]){
				count++;
			}	
		}
		if(dem2==0){
		 a[dem3++]=c[i];
		 }
			
		}	
		long long tich=1;
		for(long long int i=0;i<dem3;i++) {
			tich=tich*a[i];
			}
		printf("%lld",tich);	
		   		printf("\n"); 
	}

 }