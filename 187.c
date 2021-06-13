#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	char a[100],b[100];
	int t;
	scanf("%d\n",&t);
	for (int l=1;l<=t;l++) {
		int n,m,x=1,dem=0,lan=0,y=0;
		fflush(stdin);
		gets(a);
		gets(b);
		n=strlen(a);m=strlen(b);
//		for (int i=0;i<n;i++) if (b[0]==a[i] || b[0]==a[i]+32 || b[0]+32==a[i]) y++; 
		for (int c=0;c<n;c++) {
			for (int i=0;i<n;i++) {
				if (b[0]==a[i] || b[0]==a[i]+32 || b[0]+32==a[i]) {
					dem=0;
					x=1;
					for (int k=i+1;k<i+m;k++) {
						if (b[x]==a[k] || b[x]==a[k]+32 || b[x]+32==a[k]) dem++;
						x++;
					}
					if (dem==m-1 && (a[i+m]==' ' || a[i+m]=='\0') ) {
						for (int j=i;j<n;j++) a[j]=a[j+m+1];
						lan++;
					}
				}
			}
		}
		
		printf("Test %d: ",l);
		for (int i=0;i<n-lan*(m+1);i++) printf("%c",a[i]);
		printf("\n");
	}
	
}