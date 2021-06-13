#include<stdio.h>
	
	
int main () {
	int k;
	scanf("%d",&k);
	for(int g=0 ; g < k ;g++) {
	int a[100][100];
	int n;
	
	scanf("%d",&n);
	int dem=n*n;
	printf("Test %d:\n",g+1);
	
	for(int i=0;i<n-i;i++) {
		for(int j=i;j<n-i;j++) { 
		  a[i][j]=dem--;
		}  
		for(int j=i+1;j<n-i;j++){
		  a[j][n-i-1] =dem--;
		}  
		for(int j=n-i-2;j>=i;j--){ 
		  a[n-i-1][j]=dem--;
		}  
		for(int j=n-i-2;j>i;j--){
		  a[j][i] =dem--;
        }
	 }			   
   	  
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\n");
   }	  
}