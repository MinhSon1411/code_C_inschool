#include<stdio.h>
#include<string.h>
main () {
	char s[100],a[100];
	gets(s);
	gets(a);
	int n=strlen(s);
	int m=strlen(a);
	int k;
	scanf("%d",&k);
	char b[100];
	int dem=0;
	for(int i=0;i<k-1;i++) {
		b[dem++]=s[i];
    }
	for(int i=0;i<m;i++) {
		b[dem++]=a[i];
	}	
	for(int i=k-1;i<n;i++) {
	    b[dem++]=s[i];	
	}
	for(int i=0;i<dem;i++) {
		printf("%c",b[i]);
	}
}