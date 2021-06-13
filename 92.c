#include<stdio.h>
int a,b;
int main () {
	
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		for(int j=1;j<=a;j++) {
		if(i==1||i==b||j==1||j==a) {
			printf("*");
		
		 
		 	
		 
		
			} else {
				printf(" ");
			}
	   }

	printf("\n");
         
		}
	}