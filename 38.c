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
int a;

int b;
scanf("%d",&a);
scanf("%d",&b)	;
if (check(a)>check(b)) {
	printf("%d %d",b,a);
	}
	
else if (check(b)>check(a)){
    printf("%d %d",a,b);
}
else if(check(a)==check(b)) {
	printf("%d %d",a,b);
}
	
}