#include<stdio.h>

int check(int a) {
 if(a<2) {
 	return 1
	 ;
 }
 for(int i=2;i<a;i++)
{ 
  if(a%i==0)
 {
 	return 1;
 }
}
return 0;
 }
 int main () {
 int n,a[100],c[100];
 int dem=0;
 int dem1=0;
 scanf("%d",&n);
 int x=n;
 	while(n!=0) {
		dem++;
		n/=10;
	}
	for (int i=dem;i>=1;i--) {
		a[i]=x%10;
		x/=10;
	
	}
	for(int i=1;i<=dem;i++) {
		if(check(a[i])==0) {
			c[dem1++]=a[i];
		}
	}	
	
	for(int i=0 ; i<dem1 ; i++){
		int dem2=0;
		
		int count=1;
		
		for(int j=0 ; j<dem1 ; j++){
			if(i == j)
				continue;
			if(c[i] == c[j] && i>j)
				dem2=1;	
			if(c[i] == c[j]){
				count++;
			}	
		}
		if(dem2==0){
			printf("%d %d \n",c[i],count);
		}		
	}
	
}