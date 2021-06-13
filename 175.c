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
      	for(int j=i;j<n;j++) {
		  
	  
			if(a[i]>a[j]) {
			
		    int swap=a[j];
			a[j]=a[i];
			a[i]=swap;
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