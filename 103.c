#include<stdio.h>

int check(int a) {
 if(a<2) {
 	return 1
	 ;
 }
 for(int i=2;i<a;i++)
{ 
  if(a%i==0)
 {
 	return 1;
 }
}
return 0;
 }
 


int main(){
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) 
	{
	
	
	int a[20];
	int dem=0;
	int x[20],n;
	
	scanf("%d",&n);
		for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
	printf("Test %d: \n",g);
		for(int i=0;i<n;i++) {
			if(check(x[i])==0) {
				a[dem++]=x[i];
			 }
			}
		
			 
			
		for ( int i=0;i<dem;i++) {
		for (int j=i+1;j<dem;j++) {
			if (a[i]>a[j]) {
				int h=a[j];
				a[j]=a[i];
				a[i]=h;	
			}
		}
	}
	for(int i=0 ; i<dem ; i++){
		int dem1=0;
		
		int count=1;
		
		for(int j=0 ; j<dem ; j++){
			if(i == j)
				continue;
			if(a[i] == a[j] && i>j)
				dem1=1;	
			if(a[i] == a[j]){
				count++;
			}	
		}
		if(dem1==0){
			printf("%d xuat hien %d lan\n",a[i],count);
		}		
	}
	printf("\n");	
}
}