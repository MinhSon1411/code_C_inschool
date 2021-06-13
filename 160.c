#include<stdio.h>


int main() {
	int a[100][100];
	int  m;

	scanf("%d",  &m);
	for (int i = 1; i <=m; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int c=1;


for (int i = 1; i <=m; i++) {
	
	
	int z=a[i][i];
	a[i][i]=a[i][m-i+1];
	
	a[i][m-i+1]=z;
	; 
}

	for (int i = 1; i <=m; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ",a[i][j]);
		} 
		printf("\n");
	}
}