#include<stdio.h>
#include<math.h>
int main() {
	char s[100];
	int a,b,x,k=0;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++) {
		if (a==b ) s[i]=64+a; else {
			if (a>b) s[i]=64+b;
		}
	}
	if (a<b) {
		s[1]=64+a;
		for (int i=2;i<=b-a;i++) s[i]=s[i-1]+1;
		for (int i=b-a+1;i<=b;i++) s[i]=64+b;
	}
	for (int i=1;i<=b;i++) printf("%c",s[i]);
	printf("\n");
	if (a==b) {
		x=1;
		for (int i=1;i<a;i++) {
			for (int j=1;j<=x;j++) s[j]-=1;
			for (int j=1;j<=b;j++) printf("%c",s[j]);
			printf("\n");
			x++;
		}
	}
	if (a<b) {
		x=b-a+1;
		for (int i=1;i<a;i++) {
			for (int j=1;j<=x;j++) s[j]-=1;
			for (int j=1;j<=b;j++) printf("%c",s[j]);
			printf("\n");
			x++;
		}
	}
	if (a>b) {
		for (int i=1;i<=a-b;i++) {
			for (int j=1;j<=b;j++) printf("%c",s[j]);
			printf("\n");
		}
		x=1;
		for (int i=1;i<b;i++) {
			for (int j=1;j<=x;j++) s[j]-=1;
			for (int j=1;j<=b;j++) printf("%c",s[j]);
			printf("\n");
			x++;
		}
	}
}