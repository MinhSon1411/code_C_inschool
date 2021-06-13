#include<stdio.h>
#include<math.h>
#include<string.h>

int check(char s[]) {

            int i,ok;

            for(i=0; i<strlen(s); i++) {

                        if(s[i] >= '0' && s[i] <= '9') {

                                    ok = 1;

                        } else {

 

                                    ok = 0;

                                    break;

                        }

            }

            if(ok == 0)

                       return 1;

   return 0;        
}
void Delete(int x[],int p,int n){
	for(int i=p ; i<n ; i++){
		x[i] = x[i+1];
	}
	n--;
}


int main() {
	int k;
	scanf("%d\n",&k);
	for(int g=0;g<k;g++) {
	

            char a[1001];              
           scanf("%s",a);
     int b[10]={0,1,2,3,4,5,6,7,8,9};
		int dem=0;
		int tong =0;
	
		int p=strlen(a);
	
	int n=10;
	for(int i=0;  i<p; i++)	{  		
	        	for(int j=0;j<n;j++) {

	          if(a[i]-49-b[j]==0) {
	          	dem++;
	          	Delete(b,j,n);
	          }
	     	}
	
}
  if(a[0]-48==0||check(a)==1)
   printf("INVALID");
 
 else {
 
 if(dem==9) printf("YES");
 else printf("NO");
}
printf("\n");
}
	 

	     

	  
	}