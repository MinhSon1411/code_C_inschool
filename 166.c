#include<stdio.h>
#include<math.h>
int main ()
{
	int k;
	scanf("%d",&k);
	for(int g=1;g<=k;g++) {
   long long n;
   long long i=1;
 long long c[1000000];
  long long dem=0;
  long long  dem1=0;
   scanf("%lld",&n);
   if(n%2==1) { 
   printf("0");}
   else {
   while(i <= sqrt(n))
    {
        if(n%i==0) {
            c[dem++]=i;
            if (i != (n / i)) {
                c[dem++]=n/i;
            }
        } 

        i++;
    }
    for(int i=0;i<dem;i++) {
    if(c[i]%2==0) {
    	dem1++;
    	}
    }	
    printf("%lld",dem1);	
    
   
}
printf("\n");
}
}