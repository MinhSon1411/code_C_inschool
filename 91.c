#include<stdio.h>
int main(){
int k;
scanf("%d",&k);	
for(int j=1;j<=k;j++) {
	long int n;
	scanf("%ld",&n);
	long int dem1=0;
	long int dem2=0;
	long int x;
	while(n!=0) {
		x=n%10;
		if(x%2==0) {
			dem2+=1;
		} else {
			dem1+=1;
		}
		n/=10;
	} printf("%ld %ld",dem1,dem2);
	printf("\n");
}
}