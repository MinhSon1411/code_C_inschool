#include<stdio.h>

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
int main () {
	int k;
	scanf("%d",&k);
	for (int i=1 ;i<=k;i++){
		int a;
		scanf("%d",&a);
		if(check(a)%10==0) {
			printf("YES"); }
       else{
	   
          printf("NO");
    }
    printf("\n");
    }
}