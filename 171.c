#include<stdio.h>
int main(){ int a[10],i,b,n;

	a[2]=1;
	a[3]=9;a[4]=18;a[5]=90;
	a[6]=180;a[7]=900;a[8]=1800;a[9]=1148;
	scanf("%d",&n );
	 for (i=1;i<=n;i++)
	  {
	  	scanf("%d",&b);
	  	printf("%d ",a[b]);
	  	printf("\n");
	  } 
}