#include<stdio.h>
#include<math.h>
int main () {
	int a,b;
	scanf("%d %d",&a,&b);
{

	for(int i=0;i<a;i++) {
		for(int j=0;j<b;j++) {
			 if (i<b-j) {
			printf("%c",'@'+j+i);}
			else {
				printf("%c",'@'+b-1);}
		}
			printf("\n");

	}

			
		
		}			
	}