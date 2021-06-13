#include<stdio.h>
#include<math.h>
int check1(int x) {
	if (x<2){
		return 0;
		}
	int dem=0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}	

int check(int n){
	int a[100];
int dem=0;
while(n!=0) {
			int x=n%10;
			a[dem++]=x;		
			n/=10;
		}	
for(int i=0;i<dem;i++) {
	if(check1(a[i])==0)
	return 0;
}
return 1;
}	
  		
		



int main () {
int k;
scanf("%d",&k) ;
for(int i=0;i<k;i++) {	
  int a,b;
  scanf("%d%d",&a,&b);
  int dem=0;
  for(int i=a;i<=b;i++) {
  	if(check1(i)==1&&check(i)==1) dem++;
  }
  printf("%d",dem);
  printf("\n");
 } 
}