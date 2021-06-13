#include<stdio.h>
#include<math.h>

void nhap(long long a[] , int n){
	for(int i = 0 ; i < n ; i++)
	scanf("%lld",&a[i]);
}
void sapXep(long long a[] , int n){
	int i  , j ; 
	for( i = 0 ; i < n-1; i++){
		for(j =i+1;j<n;j++){
			if(a[i]<a[j]){
				long long t = a[i] ; 
				a[i] = a[j] ;
				a[j] = t ; 
			}
		}
	}
}
void xuly(long long a[] , int n ){
	sapXep(a,n);
	int kt = 1 ; 
	for(int i = 0 ; i < n; i++){
		for(int j = i+1 ; j < n ; j++){
			long long m = a[i]*a[i] - a[j]*a[j];
			long long mind1 = sqrt(m) ; 
			if(mind1 * mind1 == m){
					for(int k = j+1 ; k < n ; k++){
						if(mind1-a[k]==0){
						kt = 0 ; 
						break ; 
					}	
				}
			}
		
	}
}
	if(kt==0){
			printf("YES\n");
		}
		else
		printf("NO\n");
}
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		long long a[5000] ;
		int n ; 
		scanf("%d",&n);
		nhap(a,n);
		xuly(a,n);
	}
