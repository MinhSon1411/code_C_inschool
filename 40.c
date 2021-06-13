#include<stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}

void check(int x[],int n){

	int count;
	for(int i=0 ; i<n ; i++){
		int dem=0;
		
		count=1;
		for(int j=0 ; j<n ; j++){
			if(i == j)
				continue;
			if(x[i] == x[j] && i>j)
				dem=1;	
			if(x[i] == x[j]){
				count++;
			}	
		}
		if(dem==0){
			printf("%d %d\n",x[i],count);
		}		
	}	
}

int main(){
	int x[20],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	return 0;
}