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

	for(int i=0;i<n;i++) {
		for(int j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
			
			swap=a[j];
			a[j]=a[j+1];
			a[j+1]=swap;
		}
	 }		
		printf("Buoc %d: ",i+1)	;
	  
	  
		for(int i=0;i<n;i++) {
		printf("%d ",a[i]);
 	 }
 	    if(check(a,n)==1)	{
	  	break;
 	} 
 	 printf("\n");
 	} 
 	
	}