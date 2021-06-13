#include<stdio.h>
int main(){
    long int n;
    long int   sotachra;
    long int s = 1;
    
    scanf("%ld",&n);
    while(n!=0){
        sotachra = n % 10;
        s=s*sotachra;
        n /= 10;
    }    
    printf("%ld",s);
    }