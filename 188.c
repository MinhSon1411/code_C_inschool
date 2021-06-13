#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int t,n,dem;
	char s[100];
	scanf("%d",&t);
	for (int j=1;j<=t;j++) {
		fflush(stdin);	
		scanf("%s",&s);
		dem=0;
		n=strlen(s);
		int m=strlen(s)/2;
		for (int i=0;i<m;i++) {
			if (s[i]==s[n-i-1]) dem++;
			
		}
	
	
		if (dem==m-1||(dem==m && n%2==1)) printf("YES\n"); else printf("NO\n");
	}
}