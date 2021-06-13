#include<stdio.h>

long long pascal (int n,int k){ 
	long long b = 1;
	for(int i=1 ; i<=k ; i++ , n--){
		b = b *n /i;
	}
	return b;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0 ; i<n ; i++){
		
		for(int j=0 ; j<=i ; j++){
			printf("%d ",pascal(i,j));
		}
		printf("\n");
	}
	
	
	return 0;
}