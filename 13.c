#include<stdio.h>
int check(int n,int a)
 {
 

  while(n!=0){
	   a=n%10;
	  n=n/10;}
	  return a ;
	  


} int main () {
	
		int b;
		int d;
		scanf("%d",&b);
		int e=b%10;
		printf("%d %d",check(b,d),e);
		

}