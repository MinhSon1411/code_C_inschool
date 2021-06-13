#include<stdio.h>

void out(int n){
	for(int i=0 ; i<n ; i++){	
		for(int j=0; j<=i ; j++){
			if(i%2==1) {
			
			printf("%d",2*j+2);	}
		else 
		  printf("%d",2*j+1)	;
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