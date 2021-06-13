#include<stdio.h>
int check( int x) {
 if (x<2){
 	return 0;}
 for (int i=2;i<(x-1);i++)
 	if(x%i==0) 
 	return 0;
 return 1;
 	
 
 		
 	
}	 
 	

int main () {
	 int k;
	scanf("%d",&k);
	for ( int j=1;j<=k;j++) {
		 int n;
		scanf("%d",&n);
		if(check(n)==0) {
			printf("NO");
		} else 
			printf("YES");
		 printf("\n");}
	
}