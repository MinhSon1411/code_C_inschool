#include<stdio.h>

  	
#include<math.h>
int main() {
int k;
scanf("%d",&k);
while(k--) {	
    long int a[100000],n;
	scanf("%ld",&n);
	for (long int i=1;i<=n;i++) {
		scanf("%ld",&a[i]);
	}

	long int g=0;
	for (long int i=1;i<n;i++) {
		long int dem=0;
		for (long int j=i+1;j<=n;j++) {
			if (a[i]==a[j]) dem++;
		}
		if (dem==1) {
		printf("%ld",a[i]);	
		g=1;
		break;	
		}
	
	}
	if(g==0) printf("NO");
	

printf("\n");
    }
  }