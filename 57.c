#include<stdio.h>

void out(int n){
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<n-i ; j++){
			printf("%c",'A'+2*j+2*i);	
		}	
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	out(n);
	
	return 0;
}