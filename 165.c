#include<stdio.h>
int check(int a[],int n){
for(int i=0;i<n-1;i++) {
	 if(a[i]>a[i+1])
	 return 0;
  }
 return 1 	 ;
} 

int main () {
	int a[100],n,swap;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) {
	 scanf("%d",&a[i]);
	}
     
	int indexMin;
	for (int i = 0; i < n-1; i++){
		indexMin = i;
		for (int j = i+1; j < n; j++){
			if (a[indexMin] > a[j]){
				indexMin = j;
			}
		}
		if (i != indexMin){
			int temp = a[i];
			a[i] = a[indexMin];
			a[indexMin] = temp;
		}
	   
	  
	  
		for(int i=0;i<n;i++) {
		printf("%d ",a[i]);
 	 }
 	   
 	 printf("\n");
} 
		
 
 	}