#include<stdio.h>
#include<string.h>
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
			int hanh=a[i];
		tong=tong+hanh;
		tong=tong-48;
		if(a[0]-48==8&&a[p-1]-48==8) {
			n=1;
			
		}
			w*=10;
			w+=a[i];
			k*=10; 
			k+=a[p-1-i];
		}
		if(n==1&&w==k&&tong%10==0) 
		  printf("YES");
		  else {
		  	printf("NO");
	
 
		
	
  }
   printf("\n");
}	
}