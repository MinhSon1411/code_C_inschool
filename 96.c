#include<stdio.h>
int nhapmang(int a[], int n){
    for(int i = 1;i <=n; i++){
        
        scanf("%d", &a[i]);
   }
}
int check(int a) {
 if(a<2) {
 	return 1
	 ;
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
void check1(int a[],int n){
	for(int i=1;i<=n;i++) {
			if(check(a[i])==0
			) {
			 printf("%d ",a[i]);}
}
}
int main () {
	int k;
	scanf("%d",&k);
	for(int j=1;j<=k;j++) {
		int n;
		scanf("%d",&n);
		int a[50];
		nhapmang(a,n);
		check1(a,n);
		printf("\n");
	}
}