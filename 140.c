#include<stdio.h>

#include<math.h>

 int  check(int a ) {
 	int dem =0;
 	int n;
 	while (a>0) {
 		n=a%10;
 		dem=dem+n;
 		a=a/10;
 	}
 	return dem;
}
int check1(int x) {
	int dem=0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;
}
int main () {
	 int n;
	 int cout=0;
	 scanf("%d",&n);
	for(int i=1;i<=n;i++) { 
	 if(check(i)%5==0&&check1(i)==1) {
	 	cout++;
	 	
	 	printf("%d ",i);
	 }
	} 
	printf("\n");
	
	printf("%d",cout); 	
}