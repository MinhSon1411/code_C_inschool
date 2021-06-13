#include<stdio.h>
int main(){
    long int n;
    long int   x;
    long int dem1=0;
    long int dem2=0;
    
    scanf("%ld",&n);

    while(n!=0){
        x = n % 10;
        if(x%2==0) {
        	dem1=dem1+1;
		} else {
			dem2+=1;
		} n/=10;}
		printf("%ld %ld",dem2,dem1);
        
}