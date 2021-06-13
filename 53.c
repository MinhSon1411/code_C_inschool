#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	char s[100],n,chu=0,so=0;
	gets(s);
	n=strlen(s);
	for (int i=0;i<n;i++) {
		if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) chu++; 
		else if (s[i]>='0' && s[i]<='9') so++;
	}
	printf("%d %d %d",chu,so,n-so-chu);
}