#include<stdio.h>
void swap(int a[],int n){
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
void swap2(int a[],int n){
for(int i=0;i< n-1;i++) {  
  for(int j=i+1;j<n;j++) { 
    if(a[i]<a[j]) {
    	int swap1=a[i];
    	a[i]=a[j];
    	a[j]=swap1;
	}
  }
 }
}
int main () {
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
	
	
	int a[100],b[100];
	int n;
	int c[100];
	int dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf ("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		scanf("%d",&b[i]);
	}
	printf("Test %d: \n",g);
	swap(a,n);

	swap2(b,n);
	for(int i=0;i<n;i++) {
		if(dem<n+n) {
		c[dem++]=a[i];
		c[dem++]=b[i];
	  } 
	}
	for(int i=0;i<dem;i++) { 
		printf("%d ",c[i]);
   }
   printf("\n");  
}
}