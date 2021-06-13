#include<stdio.h>
int max(long long a[],long long n) {
	long long max=a[0];
    for(long long i=0;i<n;i++) {	
	  if(a[i]>max) max=a[i];
	}
	return max;
}	  
	
main () {
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
	long long a[100000];
	long long n;
	scanf("%lld",&n);
	for(long long i=0;i<n;i++) scanf("%lld",&a[i]);
	long long dem=0;
	long long dex;
	long long q=max(a,n);
	for(long long i=0;i<n;i++) {
	    if(a[i]>=0) {
		  dem=1;
		  dex=i;
		  break;
		}
    }		  
	if(dem==0) 
		printf("%lld",max(a,n));
	  
	else {
	long long sum=0;
	for(long long i=dex;i<n;i++) {
		if(sum+a[i]<0) sum=0;
		else sum=sum+a[i];
		if (sum>q)
		 q=sum;
    }
	printf("%lld",q);
    }
    printf("\n");
 }  	
}