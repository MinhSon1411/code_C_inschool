#include<stdio.h>

int main() {
	
	
	int a[100][100];
	int n, m;

	scanf("%d%d", &n, &m);
	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <=m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int c,d;
	scanf("%d %d",&c,&d);
	int b[100],e[100];
	int dem=0;
	int dem1=0;
	for(int j=1;j<=m;j++) {
		b[dem++]=a[c][j];
	
	}
	for(int j=1;j<=m;j++) {
		e[dem1++]=a[d][j];

	}
	
	
		for (int i = 1; i <=n; i++) {
			if(i==c) {
				for(int h=0;h<dem1;h++) {
					printf("%d ",e[h]);
					if(h==dem1-1)
					break;
			}
		}
		else	if(i==d) {
				for(int g=0;g<dem;g++) {
					printf("%d ",b[g]);
					if(g==dem-1)
					break;
			}
		}
		else {
		
		for (int j = 1; j <=m; j++) {
			
			
			printf("%d ",a[i][j]);
			
		}
	}
		printf("\n");
}
}