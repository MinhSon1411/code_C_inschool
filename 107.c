#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char s[1001];
		gets(s);
		int len=strlen(s);
		int count=0;
		for(int i=1;i<=len;i++){
			if((s[i]==' '||s[i]=='\0')&&s[i-1]!=' ')count++;
		}
		printf("%d\n",count);
	}
}