#include<stdio.h>

int  ucln(long long a,long long b) {

	 
	 	while (a != b){
        if (a > b){
            a -= b;}
        else{
            b -= a;
        }
    }
   long int c=a;
		return c;	
	}
int main () {
int k;
scanf("%d",&k) ;
for(int i=0;i<k;i++) {
  long long a,b,c,d;
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  if(ucln(a,b)==ucln(c,d)) printf("YES\n");
  else printf("NO\n")	;
  }
 }