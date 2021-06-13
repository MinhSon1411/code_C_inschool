#include<stdio.h>
#include<math.h>

int phanTich(int n,int m){
	int dem = 0 ; 
	int a=m;
	for(int i =2 ; i<=n ; i++){
		int k = i ;
		while(k%m==0){
			dem++;
			k = k / m ;
		}
	}
	return dem;
}
int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++) {
	int n , m ;
	scanf("%d%d",&n,&m);
    int x=phanTich(n,m);
    printf("%d\n",x);
 }
}