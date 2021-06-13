#include<stdio.h>
#include<math.h>

void out(int n){
	for(int i=0 ; i<n ; i++){	
		for(int j=0; j<2*i+1 ; j++){
			if(i>=j) {
				printf("%c",2*j+1+'@'-1);
			}
		else if(i<j){
		 
		 	printf("%c",2*(2*i+1)-2*j-1+'@'-1);
		 }
					
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