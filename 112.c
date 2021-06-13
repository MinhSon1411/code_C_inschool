#include<stdio.h>

#include<math.h>
#include<stdlib.h>
int main () {
	long int k;
	scanf("%d",&k);
	for(long int j=1;j<=k;j++) {
		long int a,b;
		scanf("%ld%ld",&a,&b);
	long	int m=a<b?a:b;
		for(long int i=m;i>=1;i--) {
			if(b%i==0&&a%i==0) {
				 printf("%d",i);
				 break;
			}
		}
			printf("\n");
			
		}
	
}