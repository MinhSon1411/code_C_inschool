#include<stdio.h>

int main() {
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
	
	int a[100][100];
	int n, m;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}


	int b[100][100];
for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			b[i][j]=a[i][j];
		}
}
printf("Test %d:\n",g);
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			printf("%d ",  b[i][j]);
	
	} printf("\n");
	}
	printf("\n");
}
	
}