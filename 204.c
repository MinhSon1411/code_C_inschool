#include<stdio.h>
#include<math.h>

int phanTich(int n){
	int dem = 0 ; 
	for(int i =2 ; i<=n ; i=i+2){
		int k = i ;
		while(k%2==0){
			dem++;
			k = k / 2 ;
		}
	}
	return dem;
}
int main(){
	int n , m ;
	scanf("%d%d",&n,&m);
	if(phanTich(n)>=m) printf("Yes");
	else printf("No");
}