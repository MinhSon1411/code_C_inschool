#include<stdio.h>
#include<math.h>

int check(int n){
	int x[100];
	x[0] = 1;
	x[1] = 2;
	for(int i=2 ; i<100 ; i++){
		x[i] = x[i-1] + x[i-2];
	}
	for(int i=0 ; i<100 ; i++){
		if(n==x[i])
			return 1;
	}
	return 0;
}
int check1(int x) {
	if (x<2){
		return 0;
		}
	int dem=0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}	



 int  check2(int a ) {
 	int dem =0;
 	int n;
 	while (a>0) {
 		n=a%10;
 		dem=dem+n;
 		a=a/10;
 	}
 	return dem;
}

int check3(int b) {
	if(check(check2(b))==1) 
	return 1;
return 0;
}	
int main(){
int m,n;
	scanf("%d %d",&m,&n);
		int min,max;
		m>n? (max=m,min=n):(max=n,min=m);
		for(int i=min;i<=max;i++) {
			if(check3(i)==1 &&check1(i)==1) { 
				printf("%d ",i);
			}
		}
	}