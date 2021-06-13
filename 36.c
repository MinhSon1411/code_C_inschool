#include<stdio.h>
#include<math.h> 
int main () {
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
		
			if(i==0||j==0) {
				printf("%d",i+j+1);
			} else  
				if(j==n-1&& i<n) {
				
					printf("%d",n-i);}
				
				
		   else	
		   if(j==n-1&&i>=n) {
						printf("%d",abs(i-j)+1);}
						
		else	if(i<n-j) {
			  printf("%d",abs(j-i)+1);}
			 else {
			  if (i<n) {
			  printf("%d",abs(i-j)+1);}
			  else {
			  	printf("%d",abs(i-j)+1);}
			 }
			}
			printf("\n");
		
	}	}