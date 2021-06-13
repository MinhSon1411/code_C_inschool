#include<stdio.h>

int main () {
	int k;
	scanf("%d",&k);
	for(int g=0 ; g < k ;g++) {
	int a[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	int sum=0,summ=0;
	int sum1,sum2,index1,index2;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
    }	
	printf("Test %d:\n",g+1);		
	for(int i=0;i<n;i++) {
		int sum1=0;
		for(int j=0;j<m;j++) {
			sum1+=a[i][j];
	    }
		if(sum1>sum){
		sum=sum1;
		index1=i;
	}			
  } 
  for(int i=index1;i<n-1;i++) {
		for(int j=0;j<m;j++) {
			a[i][j]=a[i+1][j];
		} 	
	}
	n--;

    for(int i=0;i<m;i++) { 
    	sum2=0;
	    for(int j=0;j<n;j++) {
	    	sum2+=a[j][i];
		}
		if (sum2>summ) {
			summ=sum2;
			index2=i;
	    }
	}

 for(int i=0 ; i<n ; i++){
		for(int j=index2 ; j<m-1 ; j++){
			a[i][j] = a[i][j+1];
		}
	}
	m--;

  for(int i=0;i<n;i++) {
  	for(int j=0;j<m;j++) {
  		printf("%d ",a[i][j]);
  	}
	printf("\n");
   }
 }  
 printf("\n");
}