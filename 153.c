#include<stdio.h>



void out(int x[][10],int n){
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][10],int n){
	
	int count =0;
	long long store[n*n];
	store[0] =0;
	store[1] =1;
	for(int i=2 ; i<n*n ; i++){
		store[i] = store[i-1] + store[i-2];
	}
	
	for(int i=0 ; i<n-i ; i++){
		for(int j=i ; j<n-i ; j++){
			x[i][j] = store[count++];
		}
				
		for(int j=i+1 ; j<n-i ; j++){
			x[j][n-i-1] = store[count++];
		}
		
		for(int j=n-2-i ; j>=i ; j--){
			x[n-1-i][j] = store[count++];
		}	
			
		for(int j=n-2-i ; j>i ; j--){ 
			x[j][i] = store[count++];
		}	
	}
	out(x,n);
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	check(x,n);
	
	return 0;
}