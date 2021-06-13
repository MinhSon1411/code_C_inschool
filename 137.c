#include <stdio.h>
#include<math.h>
int check(int n) {
	int m=n;
	int dao=0;
	
	while(m!=0) {
		dao=dao*10+m%10;
		m=m/10;
	}
	 
	if(dao==n) {
		return 1;
	}
	return 0;
}
int tm(int a[],int n) {
	int x;
	int dem=0;
	while(n!=0) {
		x=n%10;
		a[dem++]=x;
		n=n/10;
	}
	for(int i=0;i<dem;i++) {
		if(a[i]==6) {
			return 1;
			break;
			}
		}
	return 0;		
}

 int  check2(int a ) {
 	int dem =0;
 	int n;
 	while (a>0) {
 		n=a%10;
 		dem=dem+n;
 		a=a/10;
 	}
 int o=dem%10;
 if(o==8) {
 	return 1;
 	}
 return 0;
 }	
 int main() {
 	int m,n;
 	int min,max;
 	scanf("%d %d",&m,&n);
 	int a[100];
 	
 	(m>n)?(max=m,min=n):(max=n,min=m);
 	for(int i=min;i<max;i++) {
 		if(check(i)==1&&tm(a,i)==1&&check2(i)==1) {
 			printf("%d ",i);
 			}
 		}
		}