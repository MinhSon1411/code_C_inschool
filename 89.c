#include <stdio.h>
#include<math.h>
int check(int n) {
	int m=n;
	int dao=0;
	
	while(m!=0) {
		dao=dao*10+m%10;
		m=m/10;
	}
	 
	if(dao==n) {
		return 1;
	}
	return 0;
}



int check1(int x) {
	int dem=0;
	for (int j=2;j<=sqrt(x);j++) {
		if (x%j==0) return 0;
	}
	return 1;	
}	


int main() {
 int k;
 scanf("%d",&k);
 for(int i=1;i<=k;i++) {
 	int m,n;
		int c[100];
		int dem=0;
		scanf("%d %d",&m,&n);
		int min,max;
		m>n? (max=m,min=n):(max=n,min=m);
		for(int i=min;i<=max;i++) {
			if(check(i)==1&&check1(i)==1) {
				c[dem++]=i;
				
			}
		}
		int s=0;
	for(int i=0;i<dem;i++) {
		
		printf("%d ",c[i]);
		s++;
		if(s>9) {
			printf("\n");
			s=0;}
		}
	
			
		
			
	
		printf("\n\n");
		
}
}