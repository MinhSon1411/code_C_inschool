#include<stdio.h> 
#include<math.h>
#include<string.h> 
//#include<conio.h> 
int check(char s[], int n) {
	int chan=0,le=0;
	if (s[0]<'0' || s[0]>'9') return 2;
	for (int i=0;i<strlen(s);i++) {
		if (s[i]<'0' || s[i]>'9') return 2;
		if ((s[i]>='0' || s[i]<='9') && s[i]%2==0) chan++;
		if ((s[i]>='0' || s[i]<='9') && s[i]%2==1) le++; 
	}
	if ((n%2==0 && chan>le) || n%2==1 && le>chan)  return 1;
	return 0;
}
int main () {
	char s[2000];
	int k,n;
	scanf("%d",&k);
	for (int j=1;j<=k;j++) {
		fflush(stdin);
		scanf("%s",&s);
		n=strlen(s);
		if (check(s,n)==1) printf("YES\n"); 
		if (check(s,n)==0) printf("NO\n");
		if (check(s,n)==2) printf("INVALID\n");
	}
}