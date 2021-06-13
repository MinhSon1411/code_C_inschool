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
main () {
	int a[100][100];
	int n;
	int sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
    for(int i=1;i<=n;i++) {
		for(int j=i;j<=n;j++) {
		  if(check(a[i][j])==0)
		    sum=sum+a[i][j];
	    }
   }
   printf("%d",sum);
}