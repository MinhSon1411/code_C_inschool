#include<stdio.h>
#include<math.h>
int main() {
	int k;
	scanf("%d",&k);
	for(int i=1;i<=k;i++) {
	long long a,b,ucln,max;
	long long  bcnn;
	scanf("%lld%lld",&a,&b);
	long long x=a,y=b;
	if (a == 0 || b == 0){
        ucln=a+b;
        bcnn=0;
		printf("%lld %lld",bcnn,ucln);
        
    } else {
    	while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    ucln=a;
    bcnn=(x*y)/ucln;
		printf("%lld %lld",bcnn,ucln);
	}	

  printf("\n");
}

}