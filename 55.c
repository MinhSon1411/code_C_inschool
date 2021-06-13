#include<stdio.h>
int main () {
	int a,b;
	scanf("%d %d",&a,&b);
	int m=a>b? a:b;
	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			if(i==0) {
				printf("%c",'a'+m-1);}
			else if (i>=j) {
			printf("%c",'a'+m-j-1);}
			else if (i<j) {
				printf("%c",'a'+m-i-1);}
		}
			printf("\n");

	}
//	printf("\n");
}