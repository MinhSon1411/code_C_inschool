#include<stdio.h>
int check1(long long n){
	long long a[100];
long long dem=0;
long long dem1=0;
long long dem2=0;
while(n!=0) {
			long long x=n%10;
			a[dem++]=x;		
			n/=10;
		}	
for(long long i=0;i<dem;i++) {
	if(a[i]%2==0) dem1++;
	else dem2++;
 }
 if(dem1<dem2) return 1;
 	
	

return 0;
}	
int main () {
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
	   long long n;
	   scanf("%lld",&n);
	   if(check1(n)==1 && n%2==1) printf("YES\n");
	   else printf("NO\n");
	}
}