#include<stdio.h>

int check(long long n){
	long long  x[100];
	x[0] = 0;
	x[1] = 1;
	for(long long i=2 ; i<100 ; i++){
		x[i] = x[i-1] + x[i-2];
	}
	for(long long i=0 ; i<100 ; i++){
		if(n==x[i])
			return 1;
	}
	return 0;
}




int main(){
	int b;
	scanf("%d",&b);
	for(int i =1;i<=b;i++) {
		

	long long  n;
	scanf("%lld",&n);
	if(check(n)==1) 
	printf("YES");
	else 
	printf("NO");
	
	
	printf("\n");
}	
}