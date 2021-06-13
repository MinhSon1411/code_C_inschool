#include <stdio.h>


void in(int a[],int n) {
	 for(int i=0;i<n;i++) {
   	scanf("%d",&a[i]);
   }
}


int check(int a[], int n) {
	int i;
	for(i = 0; i <= n/2; i++) {
		if(a[i] != a[n - 1 - i]) {
			return 0;
		}
	}
	return 1;
}
	


int main () {
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++) {
		 int n;
		scanf("%d",&n);
		int a[50];
		in(a,n);
		if(check(a,n)==1) {
			printf("YES");
			
		} else {
			printf("NO");
		}
	printf("\n");
	
	}
	

		
	
}