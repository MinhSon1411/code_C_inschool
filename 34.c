#include<stdio.h>

void out(int n,int m){
	 
	for(int i=0 ; i<n ; i++){	
		for(int j=0 ; j<m ; j++){
			if(i==0 || j==0) printf("%d",i+j+1);
			else if(i<m-j){
				printf("%d",i+j+1);
			}
			else printf("%d",m-j);
			
		}	
		printf("\n");
	}
}


int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	out(n,m);

	return 0;
}