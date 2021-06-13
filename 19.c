#include<stdio.h>

void act(int n,int m){
	
	int min,max;
	int sum;
	m>n?(min=n,max=m):(max=n,min=m);

	for(int i=min; i<=max ; i++){
		sum=0;
		for(int j=i/2 ; j>0 ; j--){
			if(i%j ==0){
				sum+=j;
			}
		}
		
		if(sum == i)
			printf("%d ",i);
	}
		
		
	
}

int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	act(n,m);
	
	return 0;
}