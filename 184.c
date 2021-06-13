#include<stdio.h>

#include<math.h>



int check1(long long  x) {
	int dem=0;
	for (long long  j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}
	
	
int main () {
		int x[100][100];
	int  store[10000];
	int dem=0;
	for(long long i=2;i<100000;i++) {
	    if(dem==99)
	     break;
		if(check1(i)==1)
		store[dem++]=i;
    }
	int k;
	scanf("%d",&k);
	for(int g=0 ; g < k ;g++) {

    int count=0;
  
   
   int n;
   scanf("%d",&n);
   printf("Test %d:\n",g+1);
   for(int i=0 ; i<n-i ; i++){
		for(int j=i ; j<n-i ; j++){
			x[i][j] = store[count++];
		}
				
		for(int j=i+1 ; j<n-i ; j++){
			x[j][n-i-1] = store[count++];
		}
		
		for(int j=n-2-i ; j>=i ; j--){
			x[n-1-i][j] = store[count++];
		}	
			
		for(int j=n-2-i ; j>i ; j--){ 
			x[j][i] = store[count++];
		}	
	}
    for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
    
		printf("\n");
   }	  
}