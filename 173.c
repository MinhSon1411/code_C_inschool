#include<stdio.h>
#include<math.h>
int check(int a[],int vitri,int n) {
	int dem=1;
	for (int i=vitri+1;i<n;i++) {
		if (a[i]>a[i-1]) dem++; else break;
	}
	return dem;
} 
int main() {
	int k,n,a[100],dem,b[100],x,i,max,index,t;
	scanf("%d",&k);
	for (int l=1;l<=k;l++) {
		x=0;
		scanf("%d",&n);
		for (i=0;i<n;i++) scanf("%d",&a[i]);
		i=0;
		while (i<n) {
			dem=check(a,i,n);
			if (dem>1) {
				b[x++]=i;
				b[x++]=dem;
			}
			i=i+dem;
		}
		max=b[1]; i=3;
		while (i<x) {
			if (b[i]>max) {
				max=b[i];
				index=i-1;
			}
			i+=2;
		}
		i=1; dem=0;
		printf("Test %d:\n%d\n",l,max);
		while (i<x) {
			if (b[i]==max)  {
				dem++;
				for (int j=b[i-1];j<b[i-1]+b[i];j++) printf("%d ",a[j]);
				printf("\n");
			}
			i+=2;
		}
		if (dem==0) for (i=index;i<index+b[index+1];i++) printf("%d ",a[i]);
		
	}
}