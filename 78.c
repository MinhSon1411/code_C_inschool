#include<stdio.h>
#include<math.h>
int main() {
	long long a,b,ucln,max;
	long long  bcnn;
	scanf("%lld%lld",&a,&b);
	long long x=a,y=b;
	if (a == 0 || b == 0){
        ucln=a+b;
        printf("%lld ",ucln);
    } else {
    	while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    ucln=a; printf("%lld\n",ucln);
	}	
	if (x!=0 && y!=0) {
		bcnn=(x*y)/ucln;
		printf("%lld",bcnn);
	} else {
		bcnn=0;
		printf("%lld",bcnn);
	}
}