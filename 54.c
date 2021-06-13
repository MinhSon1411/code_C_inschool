#include<stdio.h>


int main(){
	int x[100],n;
	scanf("%d",&n);
		for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i==j)
				continue;
			if(x[i] == x[j]) {
					for(int c=j
					 ; c<n ; c++){
		x[c] = x[c+1];}
		n--;
		}
	}	
				
}
for(int i=0 ; i<n ; i++){
		printf("%d ",x[i]);
	}
}