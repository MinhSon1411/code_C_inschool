#include<stdio.h>
#include<math.h>
int main() {
	char s[100];
	int a,b,x,k=0;
	scanf("%d",&a);
	s[1]=64+a-1;
	for(int i=1;i<a;i++) {
		s[i+1]=s[i]+1;
	}
	for (int i=1;i<=a;i++) printf("%c",s[i]);
	printf("\n");
	x=a;
	for (int i=1;i<a;i++) {
		for (int j=1;j<x;j++) {
			s[j]-=1;
			printf("%c",s[j]);
		}
		printf("\n");
		x--;
	}
}