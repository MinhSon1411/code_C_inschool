#include<stdio.h>
#include<string.h>
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
int main()
{
 int k;
 scanf("%d",&k);
 for(int i=1;i<=k;i++) {
		char a[501];
		scanf(" %s",a);
		int q=0, w=0, k=0,tong=0,n=0;
		int p=strlen(a);
		for(int i=0;  i<p; i++)
		{
		if(check(a[i]-48)==1){
		  tong =1;}
			w*=10;
			w+=a[i];
			k*=10; 
			k+=a[p-1-i];
		}
		if(w==k&&tong==0) 
		  printf("YES");
		  else {
		  	printf("NO");
	
 
		
	
  }
   printf("\n");
}	
}