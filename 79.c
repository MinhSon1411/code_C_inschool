#include<stdio.h>
int main () {
long int k;
scanf ("%ld",&k)	;
for (long int j=1;j<=k;j++) {
	long int n;
	scanf("%ld",&n);
	while ( n!=0) {
		int i;
		i =n%10;
		if(i==0||i==6||i==8) {
			printf("YES");
			break;} else {
				printf("NO");
				break;
				
			}
			n=n/10;
		
		}
			printf("\n");
	}
}