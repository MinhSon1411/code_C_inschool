#include<stdio.h>

	int tich(int n) {
		int b=1;
		for(int i=1;i<=n;i++){ 
			b*=i;}
		
	return b;		
			
	
}
void check(int a) {
	int b=a;
	
	int 	 tong=0;
		
	   while(a!=0) {
	   	
	 int n=a%10;
		tong=tong+tich(n);
		
		a=a/10;}
	if(tong==b) 
	  printf("%d ",b);
	  
}	  

 int main () {
    int n;
    
	scanf("%d",&n);

for(int i=1;i<=n;i++) {
	check(i);
  } 
 }