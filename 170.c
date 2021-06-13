#include<stdio.h>
int main(){ int a[10],i,b,n;

  a[2]=20;
	  a[3]=38;a[4]=50;a[5]=38;a[6]=20;a[7]=8;
	  a[8]=5;a[9]=3;
	scanf("%d",&n );
	 for (i=1;i<=n;i++)
	  {
	  	scanf("%d",&b);
	  	printf("%d ",a[b]);
	  	printf("\n");
	  } 
}