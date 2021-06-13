#include<stdio.h>
	#include<math.h>
	int main () {
		int a1,b1,a2,b2,a3,b3,a4,b4,d1,r1,d2,r2,x,y,m,n;
		scanf("%d%d%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4);
		d1=abs(a2-a1); 
		d2=abs(a4-a3); 
		r1=abs(b2-b1);
		r2=abs(b4-b3); 
		if (a4>a2) {
			x=a3-a2;
		} else x=a1-a4; 
		m=d1+d2+x;
		if (m<d1) m=d1;
		if (m<d2) m=d2;
		if (b4>b2) y=b3-b2; else y=b1-b4; 
		n=r1+r2+y;
		if (n<r1) n=r1;	
		if (n<r2) n=r2;
		if (n>m) m=n;
		printf("%d",m*m);		
	}