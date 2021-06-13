#include<stdio.h>
#include<math.h>
int main () {
	long long a,b;
	scanf("%lld %lld",&a,&b);
	int c=sqrt(a),d=sqrt(b);
	if(c*c==a) {
		printf("%d\n",d-c+1);

	} else {
		printf("%d\n",d-c);
	}	
	if(c*c==a) {
		printf("%d\n",c*c);
	}
	for(int i=sqrt(a)+1;i*i<=b;i++)	{
		printf("%lld\n",i*i);
	}
}