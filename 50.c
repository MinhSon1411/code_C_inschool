#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	int dem=1;
	for(int i=1;i<n;i++){
		int c=0;
		for(int j=i-1;j>=0;j--){
			if(a[j]==a[i]){
				c=1;
			}
		}
		if(c==0){
			b[dem]=a[i];
			dem++;
		}
	}
//	for(int i=0;i<dem;i++){
//		printf("%d ",b[i]);
//	}
//	printf("\n");
	//////////
	int min;
	for(int i=0;i<dem-1;i++){
		
		for(int j=i+1;j<dem;j++){
			if(b[i]>=b[j]){
				min=b[j];
				b[j]=b[i];
				b[i]=min;
			}
		}
	}
		printf("%d %d",b[0],b[1]);
}