#include<stdio.h> 
#include<math.h>
int main () {
	int t;
	scanf ("%d",&t);
	while (t--) {
		int n,a,b;
		scanf("%d",&n);	
		a=pow(10,n-1);b=pow(10,n);
		for (int i=a;i<b;i++) {
				int m=i,dem=1;
				while (m!=0) {
				int x,y;
				x=m%10; m/=10;
				y=m%10; 
					if (x<y) {
						dem=0;
						break;
					}
				}
				
				if (dem==1) printf("%d ",i);
		}
		printf("\n");
	}
}