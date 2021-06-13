#include<stdio.h>
int check(int a,int tich) {
	for(int i=1;i<=a;i++) {
		tich=tich*i;
		
	}
	return tich;
	
	
}
int main () {
	int b;
	scanf("%d",&b);
	int tong =0;
	int x=b;

	int nhan=1;
	while(b!=0) {
	int  n=b%10;
	 tong =tong+check(n,nhan);
 

 	 	
	b=b/10;}
if(tong ==x) {
	printf("1");
	
} else {
	printf("0");
}
}