#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ktraNgto(long int);
bool csNgto(long int);
bool tongCsNgto(long int);

int main() {
    int k;
    scanf("%d",&k);
    
for(int g=1;g<=k;g++) {
    
	long int m,n;
scanf("%ld %ld",&n,&m);
long int min,max;
m>n?(min=n,max=m):(max=n,min=m);
long hanh=0;
for(long int i=min ;i<max;i++) {
		if(csNgto(i) && ktraNgto(i) && tongCsNgto(i)) {
			hanh++;
		}
	}
	printf("%ld",hanh);
	printf("\n");
}
}
bool tongCsNgto(long int n) {
	long int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	if(ktraNgto(sum)) {
		return true;
	}
	return false;
}

bool csNgto(long int n) {
	long int c;
	while(n > 0) {
		c = n % 10;
		n /= 10;
		if(!ktraNgto(c)) {
			return false;
		}
	}
	return true;
}

bool ktraNgto(long int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}