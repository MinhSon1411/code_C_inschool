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
int max(int a[],int n) {
  int max1=a[0];
  for(int i=0;i<n;i++) {
    if(a[i]>max1) 
	  max1=a[i];
}
return max1;
}	 

int main() {

	
	int a[100][100];
	int b[100][100];
	int n, m;
	int dem=0;
	int c[100];
	int d[100];
	int dem3=0;
    int dem1=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		dem1=0;
		for (int j = 0; j < n; j++) {
			 if(check(a[i][j])==0)
			 dem1++;
	   }
	   c[dem++]=dem1;
	  

	 }
	 

	
	 int g=max(c,dem);
	
		for (int i = 0; i < n; i++) {
			int dem2=0;
			for (int j = 0; j < n; j++) {
			 if(check(a[i][j])==0) {
			 d[dem3++]=a[i][j];
			 dem2++;
		}
	}	
	if(dem2==g) {
		printf("%d\n",i+1);
	
		for(int h=0;h<n;h++) {
			 if(check(a[i][h])==0) printf("%d ",a[i][h]);
		}	  
		
		break;
	    
    }		
		
	
}

}