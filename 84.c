#include <stdio.h>
#include <math.h>

int main() {
	int n;

	scanf("%d", &n);
	
		int count = 0;
		int m = 2;
		while(1) {
			int mark = 1;
			int i;
			
			for(i = 2; i <= sqrt(m); i++) {
				if(m % i == 0) {
					mark = 0;
					break;
				}
			}
			
			if(mark == 1) {
				count++; 
				printf("%d ", m);
				printf("\n");
			}
			
			if(count >= n) {
				break;
			}
			m++;
		}
	}