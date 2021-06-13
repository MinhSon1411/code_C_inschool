#include<stdio.h>
int check(int n,int a)
 {
 

  while(n!=0){
	   a=n%10;
	  n=n/10;}
	  return a ;
	  


} int main () {
	int k;
	scanf("%d",&k);
	for(int j=1;j<=k;j++){
		int b;
		int d;
		scanf("%d",&b);
		int e=b%10;
		if(check(b,d)==e) {
			printf("YES");
		} else {
			printf("NO");
		} printf("\n");
	}
}