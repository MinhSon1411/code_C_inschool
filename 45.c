#include<stdio.h>


int main () {
	int a[100],n,swap;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++) {
	 scanf("%d",&a[i]);
	}

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(a[i]>a[j]) {
			
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
	}
			
			 
		}
	}
	for(int i=1;i<=n;i++) {
  	printf("%d ",a[i]);
   }

}