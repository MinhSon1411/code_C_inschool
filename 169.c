#include<stdio.h>
#include<math.h>
int main(){
    int  a;
    long tong = 0 ;
    int n; 
    scanf("%d",&n);
    while(n--){
    	scanf("\n%d", &a);
    	int sum = 0;
    	while(a % 2 == 0){
    		sum += 2;
    		a /= 2;
    	}
    	
    	for(int b = 3  ; b <= sqrt(a) ; b+=2){
    
    		while(a % b == 0){
    			sum += b;
    			a /= b;
    		}
    	}
    	
    	if(a>1) sum += a;
    	tong += sum ;
    }
    printf("%ld",tong);

}