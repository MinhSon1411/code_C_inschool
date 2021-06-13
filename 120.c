#include<stdio.h>

int check(long long  a) {
 if(a<2) {
 	return 1
	 ;
 }
 for(long long i=2;i<a;i++)
{ 
  if(a%i==0)
 {
 	return 1;
 }
}
return 0;
 }
 int main () {
 long long n,a[100],c[100];
 long long dem=0;
 long long dem1=0;
 scanf("%lld",&n);
 long long x=n;
 	while(n!=0) {
		dem++;
		n/=10;
	}
	for ( long long i=dem;i>=1;i--) {
		a[i]=x%10;
		x/=10;
	
	}
	for(long long i=1;i<=dem;i++) {
		if(check(a[i])==0) {
			c[dem1++]=a[i];
		}
	}	
	
	for(long long  i=0 ; i<dem1 ; i++){
		long long  dem2=0;
		
		 long long  count=1;
		
		for(long long  j=0 ; j<dem1 ; j++){
			if(i == j)
				continue;
			if(c[i] == c[j] && i>j)
				dem2=1;	
			if(c[i] == c[j]){
				count++;
			}	
		}
		if(dem2==0){
			printf("%lld %lld \n",c[i],count);
		}		
	}
	
}