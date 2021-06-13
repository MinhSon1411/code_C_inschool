#include<stdio.h>

void out(int n){
	for(int i=0 ; i<n ; i++){	
		for(int j=0; j<2*i+1 ; j++){
			printf("%d",j+1);	
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