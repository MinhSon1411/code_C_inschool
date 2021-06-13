#include<stdio.h>
int check(int a) {
 if(a<2) {
 	return 0;
 }
 for(int i=2;i<a;i++)
{ 
  if(a%i==0)
 {
 	return 1;
 }
}
return 0;
 
}
int main () {
  long int n;
  scanf("%ld",&n);
  int dem=0;
  int a[n];
   for(int i=1;i<=n;i++) {
   	scanf("%d",&a[i]);
   }
 for(int i=1;i<=n;i++) {
  	if(check(a[i])==0&&a[i]>1) {
	  dem++;}
}
  printf("%d ",dem);
  for(int i=1;i<=n;i++) {
  	if(check(a[i])==0&&a[i]>1) {
  		printf("%d ",a[i]);
	  }
  }
}