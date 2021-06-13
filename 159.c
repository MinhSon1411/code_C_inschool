#include<stdio.h>


int main() {
	int a[100][100];
	int n, m;

	scanf("%d%d", &n, &m);
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int c,d;
	scanf("%d %d",&c,&d);
for (int i = 1; i <=n; i++) {
	int z=a[i][c];
	a[i][c]=a[i][d];
	a[i][d]=z;
}
for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}