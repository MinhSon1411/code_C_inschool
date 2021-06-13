#include<stdio.h>
int check(int a[],int n){
for(int i=0;i<n-1;i++) {
	 if(a[i]>a[i+1])
	 return 0;
  }
 return 1 	 ;
} 
void swap1(int a[],int n){
for(int i=0;i< n-1;i++) {  
  for(int j=i+1;j<n;j++) { 
    if(a[i]>a[j]) {
    	int swap1=a[i];
    	a[i]=a[j];
    	a[j]=swap1;
	}
  }
 }
}

int main () {
	int a[100],n,swap,c[100];
	int dem=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) {
	 scanf("%d",&a[i]);
	}
     
	
int index, value;
	for (int i = 0; i < n; i++){
		index = i;
		value = a[i];
		while (index > 0 && a[index - 1] > value){
			a[index] = a[index - 1];
			index --;
		}
		a[index] = value;
		c[dem++]=value;
	  swap1(c,dem);

	
	   	 	
	
	printf("Buoc %d: ",dem-1)	;
	for(int g=0;g<dem;g++) {
		 printf("%d ",c[g]);
	  
	  
 	} 
 	 printf("\n");
 	   
	
 	}
 	
}