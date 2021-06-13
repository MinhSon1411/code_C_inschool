#include<stdio.h>
#include<math.h>

int main(){


	int	a[10] = {1 , 2 , 5, 10 , 20 , 50 , 100 , 200 , 500 , 1000 };
	
	int t ; 
	scanf("%d",&t);
	while(t--){
		int n ; 
		scanf("%d",&n);
		int dem = 0 ; 
		int j = 9 ;
		while(j>=0 && n>0){ 
			if(n<a[j]){
				j--;
			}
			if(n>=a[j]){
				dem++;
				n = n - a[j];
			}
		}
		printf("%d\n",dem);
	}
}