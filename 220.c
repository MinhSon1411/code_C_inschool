#include<stdio.h> 
#include<math.h>
#include<string.h> 
//#include<conio.h> 
int check(char s[],int start, int end) {
	int dem=1,tong;
	for (int i=0;i<start;i++) {
		if (s[i]==' ') {
			int j=i+1,tong=0;
			for (int k=start+1;k<end;k++) {
				if (s[k]==s[j]) tong++;
				j++;
			}
			if (tong==end-start-1 && s[j]==' ') dem++;
		}
	}
	return dem;
}
int main () {
	long long k,n,dem,x=1,y;
	char s[100],a[100];
	scanf("%lld\n",&k);
	a[0]=' ';
	for (int j=1;j<=k;j++) {
		fflush(stdin);
		gets(s);
//		xoa dau cach dau xau
		while(s[0]==' ') {
		for (int i=0;i<strlen(s);i++) s[i]=s[i+1];
		}
//		xoa dau cach cuoi xau
		while(s[strlen(s)-1]==' ' ) s[strlen(s)-1]=s[strlen(s)];
//		in hoa -> in thuong
		for (int i=0;i<strlen(s);i++) if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		n=strlen(s)-1;
		while (s[n]!=' ') n--;
		y=x;
		for (int i=n+1;i<strlen(s);i++) {
			a[x]=s[i];
			x++;
		}
		a[x]=s[0]; x++;
		for (int i=1;i<n;i++) {
			if (s[i]==' ' && s[i+1]!=' ') {
				a[x]=s[i+1];
				x++;
			}
		}
		a[x]=' '; x++;
		dem=check(a,y-1,x-1);
		if (dem==1) for (int i=y;i<x-1;i++) printf("%c",a[i]);
		else {
			for (int i=y;i<x-1;i++) printf("%c",a[i]);
			printf("%d",dem);
		}
		printf("@ptit.edu.vn"); 
		
		if(j!=k) printf("\n");
	}
}