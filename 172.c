#include<stdio.h>

void in(int x[],int n){
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x[i]);
	}
}
int max(int a[],int n) {
  int max1=a[0];
  for(int i=0;i<n;i++) {
    if(a[i]>max1) 
	  max1=a[i];
}
return max1;
}	  	



int main(){
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++) {
	int n,x[100],c[100];
	scanf("%d",&n);
	int dem=0;
	in(x,n);
		int dem1=0;

	int count;
	for(int i=0 ; i<n ; i++){
		int dem=0;
		
		count=1;
		for(int j=0 ; j<n ; j++){
			if(i == j)
				continue;
			if(x[i] == x[j] && i>j)
				dem=1;	
			if(x[i] == x[j]){
				count++;
			}	
		}
		if(dem==0){
			c[dem1++]=count;
			
		}		
	}	
	
	for(int i=0 ; i<n ; i++){
		int dem2=0;
		
	 int	count1=1;
		for(int j=0 ; j<n ; j++){
			if(i == j)
				continue;
			if(x[i] == x[j] && i>j)
				dem2=1;	
			if(x[i] == x[j]){
				count1++;
			}	
		}
		if(dem2==0){
			if(count1==max(c,dem1)) printf("%d ",x[i]);
	}
 }	
   printf("\n");
}
}