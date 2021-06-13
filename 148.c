#include<stdio.h>
#include<math.h>
int main() {
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++) {
		int x=i;
		int y=k-1;
		for(int j=1;j<=i;j++) {
			printf("%d ",x);
			x+=y;
			y--;
			}
			printf("\n");
		}
	}