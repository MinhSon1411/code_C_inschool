#include<stdio.h>
#include<math.h>
   int stn ( long long n){
   	long long dao =0;
   	long long m=n;
   	while(m>0){			   
   	dao=dao*10 +m%10;
   	m=m/10;
   	if(dao==n)
   	return 1;
   }
   return 0;
   }
   int so( long long n){
   	long long sum;
   	while ( n>0){
   		sum=n%10;
   		n=n/10;
   		if(sum ==4)
   		return 0;
   	
	   }
   	return 1;
   }
   int tong( long long n){
   	long long sum=0;
   	while(n>0){
   		sum=sum+n%10;
   		n=n/10;
	   }
	   if(sum%10==0)
   		return 1;
	   return 0;	   
   }
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
   	 	int a;
   	 	scanf("%d",&a);
		for(int i=pow(10,a-1);i <pow(10,a);i++){
			if(stn(i)==1 && so(i)==1 && tong(i)==1)
			printf("%d ",i);
		}
   	printf("\n");
   }
  }