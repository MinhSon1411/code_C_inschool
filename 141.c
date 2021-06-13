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
int check1(int n) {
		while ( n!=0) {
		int i;
		i =n%10;
		if(i==9) {
			return 0;
			break;}
		
		n=n/10;}
		return 1;
	}
	int main () {
	 int n;
	 scanf("%d",&n);
	 int cout=0;
	 for(int j=2;j<n;j++) {
	 	if(check(j)==1&&check1(j)==1){
	 		printf("%d ",j);
	 		cout++;
	 	}
	 }	
	 	printf("\n");
	 	printf("%d",cout);
	}